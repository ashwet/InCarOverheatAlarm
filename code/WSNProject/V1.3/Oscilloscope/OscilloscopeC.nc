/*
 * Copyright (c) 2006 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Oscilloscope demo application. See README.txt file in this directory.
 *
 * @author David Gay
 */
#include "Timer.h"
#include "Oscilloscope.h"

module OscilloscopeC @safe()
{
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Receive;
    interface Timer<TMilli> as Timer;
    interface Timer<TMilli> as Timer2;
    interface Timer<TMilli> as Timer3;
    interface Read<uint16_t> as Read;
    interface Read<uint16_t> as Read2;
    interface Read<uint16_t> as Read3;
    interface Leds;
    interface Mts300Sounder;
  }
}
implementation
{
  message_t sendBuf;
  bool sendBusy;
  uint8_t accCounter = 0;
  uint32_t avgAccData = 0;
  /* Current local state - interval, version and accumulated readings */
  oscilloscope_t local;
  oscilloscope_t localTemp;
  oscilloscope_t localSound;

  uint8_t reading; /* 0 to NREADINGS */

  /* When we head an Oscilloscope message, we check it's sample count. If
     it's ahead of ours, we "jump" forwards (set our count to the received
     count). However, we must then suppress our next count increment. This
     is a very simple form of "time" synchronization (for an abstract
     notion of time). */
  bool suppressCountChange;
  bool alarmOn = FALSE;
  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {
    local.interval = DEFAULT_INTERVAL;
    local.id = TOS_NODE_ID;
    if (call RadioControl.start() != SUCCESS)
      report_problem();
  }

  void startTimer() {
    call Timer.startPeriodic(1000);
    //call Timer2.startOneShotAt(local.interval,20000);
    //call Timer3.startOneShotAt(local.interval,30000);
    reading = 0;
  }

  event void RadioControl.startDone(error_t error) {
    startTimer();
  }

  event void RadioControl.stopDone(error_t error) {
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    oscilloscope_t *omsg = payload;

    report_received();

    /* If we receive a newer version, update our interval. 
       If we hear from a future count, jump ahead but suppress our own change
    */
    if (omsg->version > local.version)
      {
	local.version = omsg->version;
	local.interval = omsg->interval;
	startTimer();
      }
    if (omsg->count > local.count)
      {
	local.count = omsg->count;
	suppressCountChange = TRUE;
      }

    return msg;
  }

  /* At each sample period:
     - if local sample buffer is full, send accumulated samples
     - read next sample
  */
  event void Timer.fired() {
    if (reading == NREADINGS) //previous conidtion 
      {
        if(alarmOn)
        {
        	if (!sendBusy && sizeof local <= call AMSend.maxPayloadLength())
        	  {
        	    // Don't need to check for null because we've already checked length
        	    // above
        	    memcpy(call AMSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof local);
        	    if (call AMSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof local) == SUCCESS)
        	      sendBusy = TRUE;
        	  }
        	if (!sendBusy)
        	  report_problem();
          alarmOn = FALSE;
        }
	reading = 0;
	/* Part 2 of cheap "time sync": increment our count if we didn't
	   jump ahead. */
	if (!suppressCountChange)
	  local.count++;
	suppressCountChange = FALSE;
  
      }
    if (call Read.read() != SUCCESS)
      report_problem();
    else
      call Leds.led0Toggle(); //red led, for accel

  }


event void Timer2.fired() {
    if (reading == NREADINGS)
      {
  if (!sendBusy && sizeof local <= call AMSend.maxPayloadLength())
    {
      // Don't need to check for null because we've already checked length
      // above
      memcpy(call AMSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof local);
      if (call AMSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof local) == SUCCESS)
        sendBusy = TRUE;
    }
  if (!sendBusy)
    report_problem();

  reading = 0;
  /* Part 2 of cheap "time sync": increment our count if we didn't
     jump ahead. */
  if (!suppressCountChange)
    local.count++;
  suppressCountChange = FALSE;
      }
    if (call Read2.read() != SUCCESS)
      report_problem();
    else
      call Leds.led2Toggle();
  }


  event void Timer3.fired() {
    if (reading == NREADINGS)
      {
  if (!sendBusy && sizeof local <= call AMSend.maxPayloadLength())
    {
      // Don't need to check for null because we've already checked length
      // above
      memcpy(call AMSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof local);
      if (call AMSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof local) == SUCCESS)
        sendBusy = TRUE;
    }
  if (!sendBusy)
    report_problem();

  reading = 0;
  /* Part 2 of cheap "time sync": increment our count if we didn't
     jump ahead. */
  if (!suppressCountChange)
    local.count++;
  suppressCountChange = FALSE;
      }
    if (call Read3.read() != SUCCESS)
      report_problem();
    else
      call Leds.led2Toggle();
  }


  event void AMSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS){
      //report_sent();
    }
    else
      report_problem();

    sendBusy = FALSE;
  }

  event void Read.readDone(error_t result, uint16_t data) {
    if (result != SUCCESS)
    {
     data = 0xffff;
     report_problem();
    }
    else
    {
      if (reading < NREADINGS) 
      {
        local.readings[reading++] = data;
        if(reading>1)
          avgAccData = (avgAccData + data)/2;
        else
          avgAccData = data;  
      }
      
      if(reading == NREADINGS)
      {
        if(avgAccData>0x01B0 && avgAccData<0x01BB)
        {
          //call Leds.led2Toggle();//yellow
          if(accCounter < 255)
            accCounter++;            
        }
        else
        {
          //call Leds.led2Toggle();
          accCounter = 0;
        }
        avgAccData = 0;
      }

      if(accCounter>2)
      {
        if (call Read2.read() != SUCCESS)
              report_problem();
            else
              call Leds.led1Toggle();

      }
    }
  }

    event void Read2.readDone(error_t result, uint16_t data) {
    if (result != SUCCESS)
      {
  data = 0xffff;
  report_problem();
      }
      /*
    if (reading < NREADINGS) 
      localTemp.readings[reading++] = data;
*/
    else
    {
    if(data>0x0202)
      {
        if (call Read3.read() != SUCCESS)
          report_problem();
        else
        {

        }

      }
    }
  }

    event void Read3.readDone(error_t result, uint16_t data) {
    if (result != SUCCESS)
      {
  data = 0xffff;
  report_problem();
      }
      else
      {
          if(data<0x01C2 || data>0x0226)
          {
            // increase the counter
            call Leds.led2Toggle();
            call Mts300Sounder.beep(500);

            alarmOn = TRUE;

          }


      }
    /*if (reading < NREADINGS) 
      localSound.readings[reading++] = data;
*/
  }
}
