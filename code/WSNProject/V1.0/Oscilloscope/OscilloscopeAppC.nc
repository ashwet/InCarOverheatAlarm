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
 * Oscilloscope demo application. Uses the demo sensor - change the
 * new DemoSensorC() instantiation if you want something else.
 *
 * See README.txt file in this directory for usage instructions.
 *
 * @author David Gay
 */
configuration OscilloscopeAppC { }
implementation
{
  components OscilloscopeC as Osc1, 
  OscilloscopeC as Osc2, 
  OscilloscopeC as Osc3, 
  MainC, ActiveMessageC, LedsC,
    new TimerMilliC() as Timer, 
    new TimerMilliC() as Timer2, 
    new TimerMilliC() as Timer3, 
    new AccelXC() as Sensor1, 
    new TempC() as Sensor2, 
    new MicC() as Sensor3,
    new AMSenderC(AM_OSCILLOSCOPE), 
    new AMReceiverC(AM_OSCILLOSCOPE);

  Osc1.Boot -> MainC;
  Osc1.RadioControl -> ActiveMessageC;
  Osc1.AMSend -> AMSenderC;
  Osc1.Receive -> AMReceiverC;
  Osc1.Timer -> Timer;
  Osc1.Timer2 -> Timer2;
  Osc1.Timer3 -> Timer3;
  Osc1.Read -> Sensor1;
  Osc1.Read2 -> Sensor2;
  Osc1.Read3 -> Sensor3;
  //OscilloscopeC.Read -> Sensor2;
  //OscilloscopeC.Read -> Sensor3;
  Osc1.Leds -> LedsC;

/*
  Osc2.Boot -> MainC;
  Osc2.RadioControl -> ActiveMessageC;
  Osc2.AMSend -> AMSenderC;
  Osc2.Receive -> AMReceiverC;
  Osc2.Timer -> Timer2;
  Osc2.Read1 -> Sensor2;
  Osc2.Leds -> LedsC;


  Osc3.Boot -> MainC;
  Osc3.RadioControl -> ActiveMessageC;
  Osc3.AMSend -> AMSenderC;
  Osc3.Receive -> AMReceiverC;
  Osc3.Timer -> Timer3;
  Osc3.Read2 -> Sensor3;
  Osc3.Leds -> LedsC;
  */
}
