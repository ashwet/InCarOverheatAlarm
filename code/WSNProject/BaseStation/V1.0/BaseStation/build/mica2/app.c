#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;






static __inline int16_t __nesc_ntoh_int16(const void * source)  ;
#line 334
static __inline int16_t __nesc_hton_int16(void * target, int16_t value)  ;





static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x2b2509be01f0, const void *arg_0x2b2509be04c8, size_t arg_0x2b2509be0770);



extern void *memset(void *arg_0x2b2509be3020, int arg_0x2b2509be3288, size_t arg_0x2b2509be3530);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b2509c02838, const void *arg_0x2b2509c02b10);
# 25 "/home/rahul/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/home/rahul/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/home/rahul/tinyos-main/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/home/rahul/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 43 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/home/rahul/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4263 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4264 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4265 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4266 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4267 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4278 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4281 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/home/rahul/tinyos-main/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4290 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4291 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4292 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4293 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4294 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4295 {
  PLATFORM_MHZ = 8
};
# 62 "/home/rahul/tinyos-main/tos/platforms/mica2/hardware.h"
enum __nesc_unnamed4296 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4297 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};


enum __nesc_unnamed4298 {
  PLATFORM_BAUDRATE = 57600L
};
# 54 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Const.h"
enum __nesc_unnamed4299 {
  CC1K_MAIN = 0x00, 
  CC1K_FREQ_2A = 0x01, 
  CC1K_FREQ_1A = 0x02, 
  CC1K_FREQ_0A = 0x03, 
  CC1K_FREQ_2B = 0x04, 
  CC1K_FREQ_1B = 0x05, 
  CC1K_FREQ_0B = 0x06, 
  CC1K_FSEP1 = 0x07, 
  CC1K_FSEP0 = 0x08, 
  CC1K_CURRENT = 0x09, 
  CC1K_FRONT_END = 0x0A, 
  CC1K_PA_POW = 0x0B, 
  CC1K_PLL = 0x0C, 
  CC1K_LOCK = 0x0D, 
  CC1K_CAL = 0x0E, 
  CC1K_MODEM2 = 0x0F, 
  CC1K_MODEM1 = 0x10, 
  CC1K_MODEM0 = 0x11, 
  CC1K_MATCH = 0x12, 
  CC1K_FSCTRL = 0x13, 
  CC1K_FSHAPE7 = 0x14, 
  CC1K_FSHAPE6 = 0x15, 
  CC1K_FSHAPE5 = 0x16, 
  CC1K_FSHAPE4 = 0x17, 
  CC1K_FSHAPE3 = 0x18, 
  CC1K_FSHAPE2 = 0x19, 
  CC1K_FSHAPE1 = 0x1A, 
  CC1K_FSDELAY = 0x1B, 
  CC1K_PRESCALER = 0x1C, 
  CC1K_TEST6 = 0x40, 
  CC1K_TEST5 = 0x41, 
  CC1K_TEST4 = 0x42, 
  CC1K_TEST3 = 0x43, 
  CC1K_TEST2 = 0x44, 
  CC1K_TEST1 = 0x45, 
  CC1K_TEST0 = 0x46, 


  CC1K_RXTX = 7, 
  CC1K_F_REG = 6, 
  CC1K_RX_PD = 5, 
  CC1K_TX_PD = 4, 
  CC1K_FS_PD = 3, 
  CC1K_CORE_PD = 2, 
  CC1K_BIAS_PD = 1, 
  CC1K_RESET_N = 0, 


  CC1K_VCO_CURRENT = 4, 
  CC1K_LO_DRIVE = 2, 
  CC1K_PA_DRIVE = 0, 


  CC1K_BUF_CURRENT = 5, 
  CC1K_LNA_CURRENT = 3, 
  CC1K_IF_RSSI = 1, 
  CC1K_XOSC_BYPASS = 0, 


  CC1K_PA_HIGHPOWER = 4, 
  CC1K_PA_LOWPOWER = 0, 


  CC1K_EXT_FILTER = 7, 
  CC1K_REFDIV = 3, 
  CC1K_ALARM_DISABLE = 2, 
  CC1K_ALARM_H = 1, 
  CC1K_ALARM_L = 0, 


  CC1K_LOCK_SELECT = 4, 
  CC1K_PLL_LOCK_ACCURACY = 3, 
  CC1K_PLL_LOCK_LENGTH = 2, 
  CC1K_LOCK_INSTANT = 1, 
  CC1K_LOCK_CONTINUOUS = 0, 


  CC1K_CAL_START = 7, 
  CC1K_CAL_DUAL = 6, 
  CC1K_CAL_WAIT = 5, 
  CC1K_CAL_CURRENT = 4, 
  CC1K_CAL_COMPLETE = 3, 
  CC1K_CAL_ITERATE = 0, 


  CC1K_PEAKDETECT = 7, 
  CC1K_PEAK_LEVEL_OFFSET = 0, 


  CC1K_MLIMIT = 5, 
  CC1K_LOCK_AVG_IN = 4, 
  CC1K_LOCK_AVG_MODE = 3, 
  CC1K_SETTLING = 1, 
  CC1K_MODEM_RESET_N = 0, 


  CC1K_BAUDRATE = 4, 
  CC1K_DATA_FORMAT = 2, 
  CC1K_XOSC_FREQ = 0, 


  CC1K_RX_MATCH = 4, 
  CC1K_TX_MATCH = 0, 


  CC1K_DITHER1 = 3, 
  CC1K_DITHER0 = 2, 
  CC1K_SHAPE = 1, 
  CC1K_FS_RESET_N = 0, 


  CC1K_PRE_SWING = 6, 
  CC1K_PRE_CURRENT = 4, 
  CC1K_IF_INPUT = 3, 
  CC1K_IF_FRONT = 2, 


  CC1K_LOOPFILTER_TP1 = 7, 
  CC1K_LOOPFILTER_TP2 = 6, 
  CC1K_CHP_OVERRIDE = 5, 
  CC1K_CHP_CO = 0, 


  CC1K_CHP_DISABLE = 5, 
  CC1K_VCO_OVERRIDE = 4, 
  CC1K_VCO_AO = 0, 


  CC1K_BREAK_LOOP = 4, 
  CC1K_CAL_DAC_OPEN = 0, 
#line 202
  CC1K_433_002_MHZ = 0x00, 
  CC1K_915_998_MHZ = 0x01, 
  CC1K_434_845_MHZ = 0x02, 
  CC1K_914_077_MHZ = 0x03, 
  CC1K_315_178_MHZ = 0x04, 


  CC1K_SquelchInit = 0x120, 
  CC1K_SquelchTableSize = 9, 
  CC1K_MaxRSSISamples = 5, 
  CC1K_Settling = 1, 
  CC1K_ValidPrecursor = 2, 
  CC1K_SquelchIntervalFast = 128, 
  CC1K_SquelchIntervalSlow = 2560, 
  CC1K_SquelchCount = 30, 
  CC1K_SquelchBuffer = 12, 

  CC1K_LPL_STATES = 9, 

  CC1K_LPL_PACKET_TIME = 16, 

  CC1K_LPL_CHECK_TIME = 16, 



  CC1K_LPL_MIN_INTERVAL = 5, 

  CC1K_LPL_MAX_INTERVAL = 10000
};
#line 248
static const_uint8_t CC1K_Params[6][20] = { 

{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

0 << CC1K_PEAKDETECT) | (28 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x7c, 0x00, 0x00, 

0x7b, 0xf9, 0xae, 

0x02, 0x38, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


8 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x51, 0x00, 0x00, 

0x50, 0xf7, 0x4F, 

0X03, 0x0E, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

11 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 




{ 
0x31, 

0x5c, 0xe0, 0x00, 

0x5c, 0xdb, 0x42, 

0x01, 0xAA, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


6 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x45, 0x60, 0x00, 

0x45, 0x55, 0xBB, 

0X03, 0x9C, (

8 << CC1K_VCO_CURRENT) | (0 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

13 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (0 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

8 << CC1K_VCO_CURRENT) | (4 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((
5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) } };
# 6 "/home/rahul/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4300 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4301 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/rahul/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4302 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4303 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4304 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 12 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Msg.h"
#line 6
typedef nx_struct CC1KHeader {
  nx_am_addr_t dest;
  nx_am_addr_t source;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) cc1000_header_t;



#line 14
typedef nx_struct CC1KFooter {
  nxle_uint16_t crc;
} __attribute__((packed)) cc1000_footer_t;










#line 18
typedef enum __nesc_unnamed4305 {
  CC1000_ACK_BIT = 0x1, 
  CC1000_WHITE_BIT = 0x2, 





  CC1000_WHITE_BIT_THRESH = 60
} CC1KMetadataBits;








#line 29
typedef nx_struct CC1KMetadata {
  nx_int16_t strength_or_preamble;
  nx_uint8_t metadataBits;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint8_t sendSecurityMode;
  nx_uint8_t receiveSecurityMode;
} __attribute__((packed)) cc1000_metadata_t;

enum __nesc_unnamed4306 {

  CC1000_INVALID_TIMESTAMP = 0x80000000L
};
# 60 "/home/rahul/tinyos-main/tos/platforms/mica2/platform_message.h"
#line 57
typedef union message_header {
  cc1000_header_t cc1k;
  serial_header_t serial;
} message_header_t;



#line 62
typedef union message_footer {
  cc1000_footer_t cc1k;
} message_footer_t;




#line 66
typedef union message_metadata {
  cc1000_metadata_t cc1k;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/home/rahul/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 43 "/home/rahul/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4307 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 50 "/home/rahul/tinyos-main/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 39 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;
# 33 "/home/rahul/tinyos-main/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 41 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4308 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4309 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4310 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4312 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4313 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4314 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4315 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef TMicro CC1000CsmaP__BusyWait__precision_tag;
typedef uint16_t CC1000CsmaP__BusyWait__size_type;
typedef uint16_t CC1000CsmaP__RssiNoiseFloor__val_t;
typedef uint16_t CC1000CsmaP__RssiCheckChannel__val_t;
typedef TMilli CC1000CsmaP__WakeupTimer__precision_tag;
typedef uint16_t CC1000CsmaP__RssiPulseCheck__val_t;
typedef T32khz CC1000SendReceiveP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC1000SendReceiveP__PacketTimeStamp32khz__size_type;
typedef uint16_t CC1000SendReceiveP__RssiRx__val_t;
typedef T32khz CC1000SendReceiveP__LocalTime32khz__precision_tag;
typedef TMilli CC1000SendReceiveP__LocalTimeMilli__precision_tag;
typedef TMilli CC1000SendReceiveP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC1000SendReceiveP__PacketTimeStampMilli__size_type;
typedef uint16_t CC1000RssiP__ActualRssi__val_t;
typedef uint16_t CC1000RssiP__Rssi__val_t;
typedef TMicro CC1000ControlP__BusyWait__precision_tag;
typedef uint16_t CC1000ControlP__BusyWait__size_type;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0____nesc_unnamed4316 {
  AdcReadNowClientC__0__ID = 0U, AdcReadNowClientC__0__HAL_ID = 0U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum HilTimerMilliC____nesc_unnamed4317 {
  HilTimerMilliC__TIMER_COUNT = 2U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm128Timer3P__CompareA__size_type;
typedef uint16_t HplAtm128Timer3P__Capture__size_type;
typedef uint16_t HplAtm128Timer3P__CompareB__size_type;
typedef uint16_t HplAtm128Timer3P__CompareC__size_type;
typedef uint16_t HplAtm128Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__size_type;
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 32 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t HplCC1000P__RssiConfig__getRefVoltage(void );
#line 25
static uint8_t HplCC1000P__RssiConfig__getChannel(void );
#line 39
static uint8_t HplCC1000P__RssiConfig__getPrescaler(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t HplCC1000P__PlatformInit__init(void );
# 63 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000.nc"
static void HplCC1000P__HplCC1000__init(void );
#line 77
static uint8_t HplCC1000P__HplCC1000__read(uint8_t addr);
#line 70
static void HplCC1000P__HplCC1000__write(uint8_t addr, uint8_t data);
# 85 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP__HplCC1000Spi__initSlave(void );
#line 80
static void HplCC1000SpiP__HplCC1000Spi__disableIntr(void );
#line 56
static void HplCC1000SpiP__HplCC1000Spi__writeByte(uint8_t data);
#line 75
static void HplCC1000SpiP__HplCC1000Spi__enableIntr(void );
#line 90
static void HplCC1000SpiP__HplCC1000Spi__txMode(void );




static void HplCC1000SpiP__HplCC1000Spi__rxMode(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t HplCC1000SpiP__PlatformInit__init(void );
# 42 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b2509d22108);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b2509d22108);
# 57 "/home/rahul/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/home/rahul/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/home/rahul/tinyos-main/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 60 "/home/rahul/tinyos-main/tos/interfaces/Boot.nc"
static void BaseStationP__Boot__booted(void );
# 113 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static void BaseStationP__SerialControl__startDone(error_t error);
#line 138
static void BaseStationP__SerialControl__stopDone(error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BaseStationP__UartReceive__receive(
# 67 "BaseStationP.nc"
am_id_t arg_0x2b2509fdd220, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void BaseStationP__uartSendTask__runTask(void );
# 113 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static void BaseStationP__RadioControl__startDone(error_t error);
#line 138
static void BaseStationP__RadioControl__stopDone(error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BaseStationP__RadioReceive__receive(
# 72 "BaseStationP.nc"
am_id_t arg_0x2b2509fe8d58, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void BaseStationP__radioSendTask__runTask(void );
# 110 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
static void BaseStationP__RadioSend__sendDone(
# 71 "BaseStationP.nc"
am_id_t arg_0x2b2509fd9b28, 
# 103 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
#line 110
static void BaseStationP__UartSend__sendDone(
# 66 "BaseStationP.nc"
am_id_t arg_0x2b2509fdc678, 
# 103 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BaseStationP__RadioSnoop__receive(
# 73 "BaseStationP.nc"
am_id_t arg_0x2b250a0059f0, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 83
static void LedsP__Leds__led1Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
# 100 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static void CC1000ActiveMessageP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC1000ActiveMessageP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
static error_t CC1000ActiveMessageP__AMSend__send(
# 51 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b250a0d3570, 
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 177 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
static am_group_t CC1000ActiveMessageP__AMPacket__group(
#line 173
message_t * amsg);
#line 88
static am_addr_t CC1000ActiveMessageP__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t CC1000ActiveMessageP__AMPacket__address(void );









static am_addr_t CC1000ActiveMessageP__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void CC1000ActiveMessageP__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t CC1000ActiveMessageP__AMPacket__type(
#line 143
message_t * amsg);
#line 136
static bool CC1000ActiveMessageP__AMPacket__isForMe(
#line 133
message_t * amsg);
# 104 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t CC1000CsmaP__SplitControl__start(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP__setWakeupTask__runTask(void );
#line 75
static void CC1000CsmaP__startStopDone__runTask(void );
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP__RssiNoiseFloor__readDone(error_t result, CC1000CsmaP__RssiNoiseFloor__val_t val);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t CC1000CsmaP__Init__init(void );
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP__RssiCheckChannel__readDone(error_t result, CC1000CsmaP__RssiCheckChannel__val_t val);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP__sleepCheck__runTask(void );
# 83 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static void CC1000CsmaP__WakeupTimer__fired(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP__adjustSquelch__runTask(void );
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP__RssiPulseCheck__readDone(error_t result, CC1000CsmaP__RssiPulseCheck__val_t val);
# 56 "/home/rahul/tinyos-main/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP__CsmaBackoff__default__congestion(
#line 53
message_t * m);
#line 48
static uint16_t CC1000CsmaP__CsmaBackoff__default__initial(
#line 45
message_t * m);
# 25 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP__ByteRadio__rts(message_t * msg);
#line 95
static void CC1000CsmaP__ByteRadio__rxDone(void );
#line 74
static void CC1000CsmaP__ByteRadio__idleByte(bool preamble);
#line 44
static void CC1000CsmaP__ByteRadio__sendDone(void );
#line 90
static void CC1000CsmaP__ByteRadio__rx(void );
# 65 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
static void CC1000SendReceiveP__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t CC1000SendReceiveP__Packet__payloadLength(
#line 74
message_t * msg);
# 103 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP__HplCC1000Spi__dataReady(uint8_t data);
# 75 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static error_t CC1000SendReceiveP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 78 "/home/rahul/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC1000SendReceiveP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC1000SendReceiveP__PacketTimeStamp32khz__size_type value);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t CC1000SendReceiveP__Init__init(void );
# 58 "/home/rahul/tinyos-main/tos/chips/cc1000/PacketTimeSyncOffset.nc"
static uint8_t CC1000SendReceiveP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC1000SendReceiveP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000SendReceiveP__RssiRx__readDone(error_t result, CC1000SendReceiveP__RssiRx__val_t val);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC1000SendReceiveP__signalPacketSent__runTask(void );
#line 75
static void CC1000SendReceiveP__signalPacketReceived__runTask(void );
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC1000SendReceiveP__StdControl__start(void );
# 61 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP__ByteRadio__listen(void );
#line 85
static bool CC1000SendReceiveP__ByteRadio__syncing(void );
#line 32
static void CC1000SendReceiveP__ByteRadio__cts(void );
#line 50
static void CC1000SendReceiveP__ByteRadio__setPreambleLength(uint16_t bytes);
#line 66
static void CC1000SendReceiveP__ByteRadio__off(void );
#line 39
static message_t *CC1000SendReceiveP__ByteRadio__getTxMessage(void );
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000RssiP__ActualRssi__readDone(error_t result, CC1000RssiP__ActualRssi__val_t val);
# 59 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static void CC1000RssiP__cancel(void );
# 102 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static void CC1000RssiP__Resource__granted(void );
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP__Rssi__read(
# 58 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x2b250a306530);
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000RssiP__Rssi__default__readDone(
# 58 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x2b250a306530, 
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP__Rssi__val_t val);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t CC1000SquelchP__Init__init(void );
# 57 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SquelchP__CC1000Squelch__get(void );






static bool CC1000SquelchP__CC1000Squelch__settled(void );
#line 51
static void CC1000SquelchP__CC1000Squelch__adjust(uint16_t data);
# 60 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
static void CC1000ControlP__CC1000Control__tunePreset(uint8_t freq);
#line 104
static void CC1000ControlP__CC1000Control__biasOn(void );
#line 50
static void CC1000ControlP__CC1000Control__init(void );
#line 96
static void CC1000ControlP__CC1000Control__coreOn(void );
#line 84
static void CC1000ControlP__CC1000Control__txMode(void );
#line 147
static bool CC1000ControlP__CC1000Control__getLOStatus(void );
#line 89
static void CC1000ControlP__CC1000Control__rxMode(void );
#line 79
static void CC1000ControlP__CC1000Control__off(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 156 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/home/rahul/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 64
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/home/rahul/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/home/rahul/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a479328);
# 61 "/home/rahul/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a479328);
# 65 "/home/rahul/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a477538);
# 59 "/home/rahul/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a477538);
# 56 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a47a1a0);
# 97 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a47a1a0);
# 88 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a47a1a0);
# 102 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a47a1a0);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/home/rahul/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t AdcP__ReadNow__read(
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4e1280);
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4e1280, 
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4de7f8);
# 25 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4de7f8);
# 39 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4de7f8);
# 81 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b250a511020, 
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b250a510cf0, 
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b250a50d940);
# 52 "/home/rahul/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 109 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/home/rahul/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b250a6a0da0);
# 92 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b250a6a0da0);
# 73 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b250a6a0da0, 
# 73 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 55 "/home/rahul/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 66 "/home/rahul/tinyos-main/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 50 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__default__fired(void );
# 47 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm128Timer1P__Capture__size_type HplAtm128Timer1P__Capture__get(void );
#line 60
static void HplAtm128Timer1P__Capture__default__captured(HplAtm128Timer1P__Capture__size_type t);
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__default__fired(void );
# 87 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 61
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 104
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 64 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 61 "/home/rahul/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 100 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b250a89d220, 
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 65 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 88 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 187
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);
# 104 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a992020, 
# 67 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a992020, 
# 96 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a9933e0, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a990308, 
# 31 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a990308);
# 23 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a990308, 
# 23 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/rahul/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 50 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__default__fired(void );
# 47 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm128Timer3P__Capture__size_type HplAtm128Timer3P__Capture__get(void );
#line 60
static void HplAtm128Timer3P__Capture__default__captured(HplAtm128Timer3P__Capture__size_type t);
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm128Timer3P__CompareC__default__fired(void );
# 104 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer3P__Timer__set(HplAtm128Timer3P__Timer__timer_size t);










static void HplAtm128Timer3P__Timer__start(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 31 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/home/rahul/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 23 "/home/rahul/tinyos-main/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplCC1000P__PCLK__makeOutput(void );
#line 40
static void HplCC1000P__PCLK__set(void );
static void HplCC1000P__PCLK__clr(void );


static void HplCC1000P__CHP_OUT__makeInput(void );

static void HplCC1000P__PALE__makeOutput(void );
#line 40
static void HplCC1000P__PALE__set(void );
static void HplCC1000P__PALE__clr(void );


static void HplCC1000P__PDATA__makeInput(void );
#line 43
static bool HplCC1000P__PDATA__get(void );


static void HplCC1000P__PDATA__makeOutput(void );
#line 40
static void HplCC1000P__PDATA__set(void );
static void HplCC1000P__PDATA__clr(void );
# 68 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P__PlatformInit__init(void );
#line 89
static inline void HplCC1000P__HplCC1000__init(void );
#line 105
static void HplCC1000P__HplCC1000__write(uint8_t addr, uint8_t data);
#line 157
static inline uint8_t HplCC1000P__HplCC1000__read(uint8_t addr);
#line 206
static inline uint8_t HplCC1000P__RssiConfig__getChannel(void );



static inline uint8_t HplCC1000P__RssiConfig__getRefVoltage(void );



static inline uint8_t HplCC1000P__RssiConfig__getPrescaler(void );
# 103 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP__HplCC1000Spi__dataReady(uint8_t data);
# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplCC1000SpiP__SpiSck__makeInput(void );
#line 44
static void HplCC1000SpiP__SpiMiso__makeInput(void );

static void HplCC1000SpiP__SpiMiso__makeOutput(void );
#line 44
static void HplCC1000SpiP__SpiMosi__makeInput(void );

static void HplCC1000SpiP__SpiMosi__makeOutput(void );
#line 44
static void HplCC1000SpiP__OC1C__makeInput(void );
# 64 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
uint8_t HplCC1000SpiP__outgoingByte;

static inline error_t HplCC1000SpiP__PlatformInit__init(void );






void __vector_17(void ) __attribute((signal))   ;







static inline void HplCC1000SpiP__HplCC1000Spi__writeByte(uint8_t data);
#line 93
static inline void HplCC1000SpiP__HplCC1000Spi__enableIntr(void );






static inline void HplCC1000SpiP__HplCC1000Spi__disableIntr(void );






static inline void HplCC1000SpiP__HplCC1000Spi__initSlave(void );








static inline void HplCC1000SpiP__HplCC1000Spi__txMode(void );




static inline void HplCC1000SpiP__HplCC1000Spi__rxMode(void );
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
# 33 "/home/rahul/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4318 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 103
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
#line 120
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/rahul/tinyos-main/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/rahul/tinyos-main/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/rahul/tinyos-main/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b2509d22108);
# 76 "/home/rahul/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4319 {

  SchedulerBasicP__NUM_TASKS = 18U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/home/rahul/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/home/rahul/tinyos-main/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 105
static inline void McuSleepC__McuSleep__sleep(void );
#line 120
static inline void McuSleepC__McuPowerState__update(void );
# 104 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t BaseStationP__SerialControl__start(void );
# 177 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
static am_group_t BaseStationP__RadioAMPacket__group(
#line 173
message_t * amsg);
#line 88
static am_addr_t BaseStationP__RadioAMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t BaseStationP__RadioAMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void BaseStationP__RadioAMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t BaseStationP__RadioAMPacket__type(
#line 143
message_t * amsg);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t BaseStationP__uartSendTask__postTask(void );
# 104 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t BaseStationP__RadioControl__start(void );
# 65 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
static void BaseStationP__RadioPacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t BaseStationP__RadioPacket__payloadLength(
#line 74
message_t * msg);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t BaseStationP__radioSendTask__postTask(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/Leds.nc"
static void BaseStationP__Leds__led0Toggle(void );
#line 83
static void BaseStationP__Leds__led1Toggle(void );
#line 100
static void BaseStationP__Leds__led2Toggle(void );
# 65 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
static void BaseStationP__UartPacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t BaseStationP__UartPacket__payloadLength(
#line 74
message_t * msg);
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
static error_t BaseStationP__RadioSend__send(
# 71 "BaseStationP.nc"
am_id_t arg_0x2b2509fd9b28, 
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 80
static error_t BaseStationP__UartSend__send(
# 66 "BaseStationP.nc"
am_id_t arg_0x2b2509fdc678, 
# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 88 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t BaseStationP__UartAMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t BaseStationP__UartAMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void BaseStationP__UartAMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t BaseStationP__UartAMPacket__type(
#line 143
message_t * amsg);
#line 187
static void BaseStationP__UartAMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);
# 98 "BaseStationP.nc"
enum BaseStationP____nesc_unnamed4320 {
#line 98
  BaseStationP__uartSendTask = 0U
};
#line 98
typedef int BaseStationP____nesc_sillytask_uartSendTask[BaseStationP__uartSendTask];
enum BaseStationP____nesc_unnamed4321 {
#line 99
  BaseStationP__radioSendTask = 1U
};
#line 99
typedef int BaseStationP____nesc_sillytask_radioSendTask[BaseStationP__radioSendTask];
#line 83
enum BaseStationP____nesc_unnamed4322 {
  BaseStationP__UART_QUEUE_LEN = 12, 
  BaseStationP__RADIO_QUEUE_LEN = 12
};

message_t BaseStationP__uartQueueBufs[BaseStationP__UART_QUEUE_LEN];
message_t * BaseStationP__uartQueue[BaseStationP__UART_QUEUE_LEN];
uint8_t BaseStationP__uartIn;
#line 90
uint8_t BaseStationP__uartOut;
bool BaseStationP__uartBusy;
#line 91
bool BaseStationP__uartFull;

message_t BaseStationP__radioQueueBufs[BaseStationP__RADIO_QUEUE_LEN];
message_t * BaseStationP__radioQueue[BaseStationP__RADIO_QUEUE_LEN];
uint8_t BaseStationP__radioIn;
#line 95
uint8_t BaseStationP__radioOut;
bool BaseStationP__radioBusy;
#line 96
bool BaseStationP__radioFull;




static inline void BaseStationP__dropBlink(void );



static inline void BaseStationP__failBlink(void );



static inline void BaseStationP__Boot__booted(void );
#line 130
static inline void BaseStationP__RadioControl__startDone(error_t error);





static inline void BaseStationP__SerialControl__startDone(error_t error);





static inline void BaseStationP__SerialControl__stopDone(error_t error);
static inline void BaseStationP__RadioControl__stopDone(error_t error);



static message_t * BaseStationP__receive(message_t * msg, void *payload, uint8_t len);

static inline message_t *BaseStationP__RadioSnoop__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);



static inline message_t *BaseStationP__RadioReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);



static message_t *BaseStationP__receive(message_t *msg, void *payload, uint8_t len);
#line 188
uint8_t BaseStationP__tmpLen;

static inline void BaseStationP__uartSendTask__runTask(void );
#line 222
static inline void BaseStationP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error);
#line 237
static inline message_t *BaseStationP__UartReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);
#line 270
static inline void BaseStationP__radioSendTask__runTask(void );
#line 301
static inline void BaseStationP__RadioSend__sendDone(am_id_t id, message_t *msg, error_t error);
# 42 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/home/rahul/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 84
static inline void LedsP__Leds__led0Toggle(void );
#line 99
static inline void LedsP__Leds__led1Toggle(void );
#line 114
static inline void LedsP__Leds__led2Toggle(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static error_t CC1000ActiveMessageP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 60 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_addr_t CC1000ActiveMessageP__amAddress(void );
# 110 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
static void CC1000ActiveMessageP__AMSend__sendDone(
# 51 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b250a0d3570, 
# 103 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC1000ActiveMessageP__Snoop__receive(
# 53 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b250a0d12f0, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



CC1000ActiveMessageP__Receive__receive(
# 52 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b250a0d2780, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 65 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t * CC1000ActiveMessageP__getHeader(message_t * amsg);



static inline cc1000_footer_t *CC1000ActiveMessageP__getFooter(message_t *amsg);



static inline error_t CC1000ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 88
static inline void CC1000ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);
#line 102
static inline message_t *CC1000ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 115
static inline am_addr_t CC1000ActiveMessageP__AMPacket__address(void );



static inline am_addr_t CC1000ActiveMessageP__AMPacket__destination(message_t *amsg);




static inline am_addr_t CC1000ActiveMessageP__AMPacket__source(message_t *amsg);









static inline void CC1000ActiveMessageP__AMPacket__setSource(message_t *amsg, am_addr_t addr);




static inline bool CC1000ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC1000ActiveMessageP__AMPacket__type(message_t *amsg);
#line 159
static inline am_group_t CC1000ActiveMessageP__AMPacket__group(message_t *msg);
# 113 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static void CC1000CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC1000CsmaP__SplitControl__stopDone(error_t error);
# 66 "/home/rahul/tinyos-main/tos/lib/timer/BusyWait.nc"
static void CC1000CsmaP__BusyWait__wait(CC1000CsmaP__BusyWait__size_type dt);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP__setWakeupTask__postTask(void );
#line 67
static error_t CC1000CsmaP__startStopDone__postTask(void );
# 87 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP__cancelRssi(void );
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP__RssiNoiseFloor__read(void );
# 52 "/home/rahul/tinyos-main/tos/interfaces/Random.nc"
static uint16_t CC1000CsmaP__Random__rand16(void );
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP__RssiCheckChannel__read(void );
# 57 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000CsmaP__CC1000Squelch__get(void );






static bool CC1000CsmaP__CC1000Squelch__settled(void );
#line 51
static void CC1000CsmaP__CC1000Squelch__adjust(uint16_t data);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP__sleepCheck__postTask(void );
# 92 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static bool CC1000CsmaP__WakeupTimer__isRunning(void );
#line 73
static void CC1000CsmaP__WakeupTimer__startOneShot(uint32_t dt);
# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
static error_t CC1000CsmaP__ByteRadioInit__init(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP__adjustSquelch__postTask(void );
# 104 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
static void CC1000CsmaP__CC1000Control__biasOn(void );
#line 50
static void CC1000CsmaP__CC1000Control__init(void );
#line 96
static void CC1000CsmaP__CC1000Control__coreOn(void );
#line 89
static void CC1000CsmaP__CC1000Control__rxMode(void );
#line 79
static void CC1000CsmaP__CC1000Control__off(void );
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC1000CsmaP__ByteRadioControl__start(void );
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP__RssiPulseCheck__read(void );
# 56 "/home/rahul/tinyos-main/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP__CsmaBackoff__congestion(
#line 53
message_t * m);
#line 48
static uint16_t CC1000CsmaP__CsmaBackoff__initial(
#line 45
message_t * m);
# 61 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP__ByteRadio__listen(void );
#line 85
static bool CC1000CsmaP__ByteRadio__syncing(void );
#line 32
static void CC1000CsmaP__ByteRadio__cts(void );
#line 50
static void CC1000CsmaP__ByteRadio__setPreambleLength(uint16_t bytes);
#line 66
static void CC1000CsmaP__ByteRadio__off(void );
#line 39
static message_t *CC1000CsmaP__ByteRadio__getTxMessage(void );
# 119 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
enum CC1000CsmaP____nesc_unnamed4323 {
#line 119
  CC1000CsmaP__setWakeupTask = 2U
};
#line 119
typedef int CC1000CsmaP____nesc_sillytask_setWakeupTask[CC1000CsmaP__setWakeupTask];
#line 186
enum CC1000CsmaP____nesc_unnamed4324 {
#line 186
  CC1000CsmaP__startStopDone = 3U
};
#line 186
typedef int CC1000CsmaP____nesc_sillytask_startStopDone[CC1000CsmaP__startStopDone];
#line 304
enum CC1000CsmaP____nesc_unnamed4325 {
#line 304
  CC1000CsmaP__sleepCheck = 4U
};
#line 304
typedef int CC1000CsmaP____nesc_sillytask_sleepCheck[CC1000CsmaP__sleepCheck];
#line 327
enum CC1000CsmaP____nesc_unnamed4326 {
#line 327
  CC1000CsmaP__adjustSquelch = 5U
};
#line 327
typedef int CC1000CsmaP____nesc_sillytask_adjustSquelch[CC1000CsmaP__adjustSquelch];
#line 92
enum CC1000CsmaP____nesc_unnamed4327 {
  CC1000CsmaP__DISABLED_STATE, 
  CC1000CsmaP__IDLE_STATE, 
  CC1000CsmaP__RX_STATE, 
  CC1000CsmaP__TX_STATE, 
  CC1000CsmaP__POWERDOWN_STATE, 
  CC1000CsmaP__PULSECHECK_STATE
};

enum CC1000CsmaP____nesc_unnamed4328 {
  CC1000CsmaP__TIME_AFTER_CHECK = 30
};

uint8_t CC1000CsmaP__radioState = CC1000CsmaP__DISABLED_STATE;



#line 106
struct CC1000CsmaP____nesc_unnamed4329 {
  uint8_t ccaOff : 1;
  uint8_t txPending : 1;
} CC1000CsmaP__f;
uint8_t CC1000CsmaP__count;
uint8_t CC1000CsmaP__clearCount;

int16_t CC1000CsmaP__macDelay;

uint16_t CC1000CsmaP__sleepTime;

uint16_t CC1000CsmaP__rssiForSquelch;



static inline cc1000_metadata_t * CC1000CsmaP__getMetadata(message_t * amsg);



static inline void CC1000CsmaP__enterIdleState(void );




static inline void CC1000CsmaP__enterIdleStateSetWakeup(void );









static inline void CC1000CsmaP__enterPowerDownState(void );




static inline void CC1000CsmaP__enterPulseCheckState(void );




static inline void CC1000CsmaP__enterRxState(void );




static inline void CC1000CsmaP__enterTxState(void );





static void CC1000CsmaP__radioOn(void );







static inline void CC1000CsmaP__radioOff(void );




static inline void CC1000CsmaP__setPreambleLength(message_t * msg);




static inline error_t CC1000CsmaP__Init__init(void );






static inline void CC1000CsmaP__startStopDone__runTask(void );










static inline error_t CC1000CsmaP__SplitControl__start(void );
#line 231
static void CC1000CsmaP__setWakeup(void );
#line 263
static inline void CC1000CsmaP__setWakeupTask__runTask(void );



static inline void CC1000CsmaP__WakeupTimer__fired(void );
#line 304
static inline void CC1000CsmaP__sleepCheck__runTask(void );
#line 329
static inline void CC1000CsmaP__RssiPulseCheck__readDone(error_t result, uint16_t data);
#line 369
static inline void CC1000CsmaP__ByteRadio__rts(message_t * msg);
#line 385
static inline void CC1000CsmaP__ByteRadio__sendDone(void );




static inline void CC1000CsmaP__congestion(void );



static inline void CC1000CsmaP__ByteRadio__idleByte(bool preamble);
#line 408
static inline void CC1000CsmaP__RssiCheckChannel__readDone(error_t result, uint16_t data);
#line 437
static inline void CC1000CsmaP__ByteRadio__rx(void );



static void CC1000CsmaP__ByteRadio__rxDone(void );







static inline void CC1000CsmaP__adjustSquelch__runTask(void );






static inline void CC1000CsmaP__RssiNoiseFloor__readDone(error_t result, uint16_t data);
#line 485
static inline uint16_t CC1000CsmaP__CsmaBackoff__default__initial(message_t *m);




static inline uint16_t CC1000CsmaP__CsmaBackoff__default__congestion(message_t *m);
#line 544
static inline void CC1000CsmaP__setPreambleLength(message_t * msg);
# 87 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static am_addr_t CC1000SendReceiveP__amAddress(void );
# 85 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP__HplCC1000Spi__initSlave(void );
#line 80
static void CC1000SendReceiveP__HplCC1000Spi__disableIntr(void );
#line 56
static void CC1000SendReceiveP__HplCC1000Spi__writeByte(uint8_t data);
#line 75
static void CC1000SendReceiveP__HplCC1000Spi__enableIntr(void );
#line 90
static void CC1000SendReceiveP__HplCC1000Spi__txMode(void );




static void CC1000SendReceiveP__HplCC1000Spi__rxMode(void );
# 100 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static void CC1000SendReceiveP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC1000SendReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SendReceiveP__CC1000Squelch__get(void );
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t CC1000SendReceiveP__RssiRx__read(void );
# 61 "/home/rahul/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t CC1000SendReceiveP__LocalTime32khz__get(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP__signalPacketSent__postTask(void );
# 84 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
static void CC1000SendReceiveP__CC1000Control__txMode(void );
#line 147
static bool CC1000SendReceiveP__CC1000Control__getLOStatus(void );
#line 89
static void CC1000SendReceiveP__CC1000Control__rxMode(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP__signalPacketReceived__postTask(void );
# 25 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP__ByteRadio__rts(message_t * msg);
#line 95
static void CC1000SendReceiveP__ByteRadio__rxDone(void );
#line 74
static void CC1000SendReceiveP__ByteRadio__idleByte(bool preamble);
#line 44
static void CC1000SendReceiveP__ByteRadio__sendDone(void );
#line 90
static void CC1000SendReceiveP__ByteRadio__rx(void );
# 417 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
enum CC1000SendReceiveP____nesc_unnamed4330 {
#line 417
  CC1000SendReceiveP__signalPacketSent = 6U
};
#line 417
typedef int CC1000SendReceiveP____nesc_sillytask_signalPacketSent[CC1000SendReceiveP__signalPacketSent];
#line 594
enum CC1000SendReceiveP____nesc_unnamed4331 {
#line 594
  CC1000SendReceiveP__signalPacketReceived = 7U
};
#line 594
typedef int CC1000SendReceiveP____nesc_sillytask_signalPacketReceived[CC1000SendReceiveP__signalPacketReceived];
#line 97
static const int8_t CC1000SendReceiveP__BIT_CORRECTION[8] = { 27, 28, 30, 32, 34, 36, 38, 40 };





enum CC1000SendReceiveP____nesc_unnamed4332 {
  CC1000SendReceiveP__OFF_STATE, 

  CC1000SendReceiveP__INACTIVE_STATE, 

  CC1000SendReceiveP__LISTEN_STATE, 


  CC1000SendReceiveP__SYNC_STATE, 
  CC1000SendReceiveP__RX_STATE, 
  CC1000SendReceiveP__RECEIVED_STATE, 
  CC1000SendReceiveP__SENDING_ACK, 


  CC1000SendReceiveP__TXPREAMBLE_STATE, 
  CC1000SendReceiveP__TXSYNC_STATE, 
  CC1000SendReceiveP__TXDATA_STATE, 
  CC1000SendReceiveP__TXCRC_STATE, 
  CC1000SendReceiveP__TXFLUSH_STATE, 
  CC1000SendReceiveP__TXWAITFORACK_STATE, 
  CC1000SendReceiveP__TXREADACK_STATE, 
  CC1000SendReceiveP__TXDONE_STATE
};

enum CC1000SendReceiveP____nesc_unnamed4333 {
  CC1000SendReceiveP__SYNC_BYTE1 = 0x33, 
  CC1000SendReceiveP__SYNC_BYTE2 = 0xcc, 
  CC1000SendReceiveP__SYNC_WORD = (CC1000SendReceiveP__SYNC_BYTE1 << 8) | CC1000SendReceiveP__SYNC_BYTE2, 
  CC1000SendReceiveP__ACK_BYTE1 = 0xba, 
  CC1000SendReceiveP__ACK_BYTE2 = 0x83, 
  CC1000SendReceiveP__ACK_WORD = (CC1000SendReceiveP__ACK_BYTE1 << 8) | CC1000SendReceiveP__ACK_BYTE2, 
  CC1000SendReceiveP__ACK_LENGTH = 16, 
  CC1000SendReceiveP__MAX_ACK_WAIT = 18
};

uint8_t CC1000SendReceiveP__radioState;





#line 139
struct CC1000SendReceiveP____nesc_unnamed4334 {
  uint8_t ack : 1;
  uint8_t txBusy : 1;
  uint8_t invert : 1;
  uint8_t rxBitOffset : 3;
} CC1000SendReceiveP__f;
uint16_t CC1000SendReceiveP__count;
uint16_t CC1000SendReceiveP__runningCrc;

uint16_t CC1000SendReceiveP__rxShiftBuf;
message_t CC1000SendReceiveP__rxBuf;
message_t * CC1000SendReceiveP__rxBufPtr = &CC1000SendReceiveP__rxBuf;

uint16_t CC1000SendReceiveP__preambleLength;
message_t * CC1000SendReceiveP__txBufPtr;
uint8_t CC1000SendReceiveP__nextTxByte;

const_uint8_t CC1000SendReceiveP__ackCode[5] = { 0xab, CC1000SendReceiveP__ACK_BYTE1, CC1000SendReceiveP__ACK_BYTE2, 0xaa, 0xaa };



static inline cc1000_header_t * CC1000SendReceiveP__getHeader(message_t * amsg);



static inline cc1000_footer_t *CC1000SendReceiveP__getFooter(message_t * amsg);



static inline cc1000_metadata_t * CC1000SendReceiveP__getMetadata(message_t * amsg);










static inline void CC1000SendReceiveP__enterInactiveState(void );



static inline void CC1000SendReceiveP__enterListenState(void );




static inline void CC1000SendReceiveP__enterSyncState(void );





static inline void CC1000SendReceiveP__enterRxState(void );







static inline void CC1000SendReceiveP__enterReceivedState(void );



static inline void CC1000SendReceiveP__enterAckState(void );




static inline void CC1000SendReceiveP__enterTxPreambleState(void );






static inline void CC1000SendReceiveP__enterTxSyncState(void );



static inline void CC1000SendReceiveP__enterTxDataState(void );







static inline void CC1000SendReceiveP__enterTxCrcState(void );



static inline void CC1000SendReceiveP__enterTxFlushState(void );




static inline void CC1000SendReceiveP__enterTxWaitForAckState(void );




static inline void CC1000SendReceiveP__enterTxReadAckState(void );





static inline void CC1000SendReceiveP__enterTxDoneState(void );



static inline error_t CC1000SendReceiveP__Init__init(void );





static inline error_t CC1000SendReceiveP__StdControl__start(void );
#line 278
static inline error_t CC1000SendReceiveP__Send__send(message_t *msg, uint8_t len);
#line 300
static inline void CC1000SendReceiveP__ByteRadio__cts(void );
#line 313
static inline void CC1000SendReceiveP__sendNextByte(void );




static inline void CC1000SendReceiveP__txPreamble(void );








static inline void CC1000SendReceiveP__txSync(void );





static inline void CC1000SendReceiveP__txData(void );
#line 361
static inline void CC1000SendReceiveP__txCrc(void );





static inline void CC1000SendReceiveP__txFlush(void );
#line 380
static inline void CC1000SendReceiveP__txWaitForAck(void );










static inline void CC1000SendReceiveP__txReadAck(uint8_t in);
#line 417
static inline void CC1000SendReceiveP__signalPacketSent__runTask(void );
#line 429
static inline void CC1000SendReceiveP__txDone(void );







static inline void CC1000SendReceiveP__packetReceived(void );
static void CC1000SendReceiveP__packetReceiveDone(void );

static void CC1000SendReceiveP__ByteRadio__listen(void );






static inline void CC1000SendReceiveP__ByteRadio__off(void );




static inline void CC1000SendReceiveP__listenData(uint8_t in);
#line 468
static inline void CC1000SendReceiveP__syncData(uint8_t in);
#line 522
static inline void CC1000SendReceiveP__RssiRx__readDone(error_t result, uint16_t data);








static inline void CC1000SendReceiveP__rxData(uint8_t in);
#line 563
static inline void CC1000SendReceiveP__packetReceived(void );
#line 583
static inline void CC1000SendReceiveP__ackData(uint8_t in);










static inline void CC1000SendReceiveP__signalPacketReceived__runTask(void );
#line 616
static void CC1000SendReceiveP__packetReceiveDone(void );
#line 633
static inline void CC1000SendReceiveP__HplCC1000Spi__dataReady(uint8_t data);
#line 659
static inline void CC1000SendReceiveP__ByteRadio__setPreambleLength(uint16_t bytes);







static inline message_t *CC1000SendReceiveP__ByteRadio__getTxMessage(void );



static inline bool CC1000SendReceiveP__ByteRadio__syncing(void );





static inline void CC1000SendReceiveP__Packet__clear(message_t *msg);





static inline uint8_t CC1000SendReceiveP__Packet__payloadLength(message_t *msg);
#line 746
static inline void CC1000SendReceiveP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 776
static inline bool CC1000SendReceiveP__PacketTimeSyncOffset__isSet(message_t *msg);




static uint8_t CC1000SendReceiveP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP__ActualRssi__read(void );
# 120 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC1000RssiP__Resource__release(void );
#line 97
static error_t CC1000RssiP__Resource__immediateRequest(void );
#line 88
static error_t CC1000RssiP__Resource__request(void );
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void CC1000RssiP__Rssi__readDone(
# 58 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x2b250a306530, 
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP__Rssi__val_t val);
# 68 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
enum CC1000RssiP____nesc_unnamed4335 {
  CC1000RssiP__IDLE = 4U, 
  CC1000RssiP__CANCELLED = 5U
};


uint8_t CC1000RssiP__currentOp = CC1000RssiP__IDLE;
uint8_t CC1000RssiP__nextOp;

static inline void CC1000RssiP__cancel(void );




static inline void CC1000RssiP__Resource__granted(void );



static error_t CC1000RssiP__Rssi__read(uint8_t reason);
#line 100
static inline void CC1000RssiP__startNextOp(void );










static inline void CC1000RssiP__ActualRssi__readDone(error_t result, uint16_t data);








static inline void CC1000RssiP__Rssi__default__readDone(uint8_t reason, error_t result, uint16_t data);
# 60 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SquelchP.nc"
uint16_t CC1000SquelchP__clearThreshold = CC1K_SquelchInit;
uint16_t CC1000SquelchP__squelchTable[CC1K_SquelchTableSize];
uint8_t CC1000SquelchP__squelchIndex;
#line 62
uint8_t CC1000SquelchP__squelchCount;

static inline error_t CC1000SquelchP__Init__init(void );








static inline void CC1000SquelchP__CC1000Squelch__adjust(uint16_t data);
#line 102
static inline uint16_t CC1000SquelchP__CC1000Squelch__get(void );



static inline bool CC1000SquelchP__CC1000Squelch__settled(void );
# 66 "/home/rahul/tinyos-main/tos/lib/timer/BusyWait.nc"
static void CC1000ControlP__BusyWait__wait(CC1000ControlP__BusyWait__size_type dt);
# 63 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000.nc"
static void CC1000ControlP__CC__init(void );
#line 77
static uint8_t CC1000ControlP__CC__read(uint8_t addr);
#line 70
static void CC1000ControlP__CC__write(uint8_t addr, uint8_t data);
# 63 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
uint8_t CC1000ControlP__txCurrent;
#line 63
uint8_t CC1000ControlP__rxCurrent;
#line 63
uint8_t CC1000ControlP__power;

enum CC1000ControlP____nesc_unnamed4336 {
  CC1000ControlP__IF = 150000, 
  CC1000ControlP__FREQ_MIN = 4194304, 
  CC1000ControlP__FREQ_MAX = 16751615
};
#line 101
static void CC1000ControlP__calibrateNow(void );
#line 114
static inline void CC1000ControlP__calibrate(void );
#line 257
static inline void CC1000ControlP__CC1000Control__init(void );
#line 298
static inline void CC1000ControlP__CC1000Control__tunePreset(uint8_t freq);
#line 322
static void CC1000ControlP__CC1000Control__txMode(void );
#line 336
static void CC1000ControlP__CC1000Control__rxMode(void );








static inline void CC1000ControlP__CC1000Control__coreOn(void );









static inline void CC1000ControlP__CC1000Control__biasOn(void );








static void CC1000ControlP__CC1000Control__off(void );
#line 393
static inline bool CC1000ControlP__CC1000Control__getLOStatus(void );
# 119 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 102 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 98
struct Atm128AdcP____nesc_unnamed4337 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 102
#line 98
struct Atm128AdcP____nesc_unnamed4337 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 124
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 204
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 228
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 262
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 156 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/home/rahul/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );



static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 78
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 108
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "/home/rahul/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4338 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/home/rahul/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a479328);
# 61 "/home/rahul/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a479328);
# 65 "/home/rahul/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a477538);
# 59 "/home/rahul/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a477538);
# 79 "/home/rahul/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2b250a47a1a0);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4339 {
#line 75
  ArbiterP__0__grantedTask = 8U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4340 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4341 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4342 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);









static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/home/rahul/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/home/rahul/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/home/rahul/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4e34f8, 
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4e1280, 
# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4de7f8);
# 25 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4de7f8);
# 39 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b250a4de7f8);
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
enum AdcP____nesc_unnamed4343 {
#line 103
  AdcP__acquiredData = 9U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4344 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);
#line 99
static inline error_t AdcP__ReadNow__read(uint8_t c);



static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b250a511020, 
# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
# 120 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b250a50d940);
#line 39
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);







static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 52 "/home/rahul/tinyos-main/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4345 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 85
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 103
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 131
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 164
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 187
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 207
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/rahul/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4346 {
#line 74
  AlarmToTimerC__0__fired = 10U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b250a6a0da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4347 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 11U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4348 {

  VirtualizeTimerC__0__NUM_TIMERS = 2, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4349 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);









static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/rahul/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 62 "/home/rahul/tinyos-main/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 55 "/home/rahul/tinyos-main/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__fired(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 140
static inline void HplAtm128Timer1P__Timer__start(void );
#line 153
static inline bool HplAtm128Timer1P__Timer__test(void );
#line 197
static inline uint16_t HplAtm128Timer1P__Capture__get(void );





static inline void HplAtm128Timer1P__CompareA__default__fired(void );
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareB__default__fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareC__default__fired(void );
void __vector_24(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__Capture__default__captured(uint16_t time);
void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 104 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/rahul/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4350 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 64 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/home/rahul/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 75 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b250a89d220, 
# 103 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b250a89c340, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);
#line 113
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg);




static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 148
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);




static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr);








static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
#line 189
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(message_t *msg, am_group_t group);
# 113 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/home/rahul/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/rahul/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4351 {
#line 191
  SerialP__RunTx = 12U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4352 {
#line 322
  SerialP__startDoneTask = 13U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4353 {
#line 332
  SerialP__stopDoneTask = 14U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4354 {
#line 341
  SerialP__defaultSerialFlushTask = 15U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4355 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4356 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4357 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4358 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4359 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4360 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4361 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4362 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a992020, 
# 96 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a9933e0, 
# 71 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a990308, 
# 31 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a990308);
# 23 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b250a990308, 
# 23 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4363 {
#line 158
  SerialDispatcherP__0__signalSendDone = 16U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4364 {
#line 275
  SerialDispatcherP__0__receiveTask = 17U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4365 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4366 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4367 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4368 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/home/rahul/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 96 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 116
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 173
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 274
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__fired(void );
# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t);
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__fired(void );
#line 58
static void HplAtm128Timer3P__CompareC__fired(void );
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__overflow(void );
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t);








static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x);
#line 136
static inline void HplAtm128Timer3P__Timer__start(void );
#line 191
static inline uint16_t HplAtm128Timer3P__Capture__get(void );





static inline void HplAtm128Timer3P__CompareA__default__fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareB__default__fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareC__default__fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 104 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void );
# 51 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void );
# 65 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow(void );
# 67 "/home/rahul/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__1____nesc_unnamed4369 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 51 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 92 "/home/rahul/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 81 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__writeByte(uint8_t data)
#line 81
{
  /* atomic removed: atomic calls only */
#line 82
  HplCC1000SpiP__outgoingByte = data;
}

# 56 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__writeByte(uint8_t data){
#line 56
  HplCC1000SpiP__HplCC1000Spi__writeByte(data);
#line 56
}
#line 56
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 2);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMosi__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput();
#line 44
}
#line 44
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMiso__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 121 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__rxMode(void )
#line 121
{
  HplCC1000SpiP__SpiMiso__makeInput();
  HplCC1000SpiP__SpiMosi__makeInput();
}

# 95 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__rxMode(void ){
#line 95
  HplCC1000SpiP__HplCC1000Spi__rxMode();
#line 95
}
#line 95
# 89 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP__CC1000Control__rxMode(void ){
#line 89
  CC1000ControlP__CC1000Control__rxMode();
#line 89
}
#line 89
# 583 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__ackData(uint8_t in)
#line 583
{
  if (++CC1000SendReceiveP__count >= CC1000SendReceiveP__ACK_LENGTH) 
    {
      CC1000SendReceiveP__CC1000Control__rxMode();
      CC1000SendReceiveP__HplCC1000Spi__rxMode();
      CC1000SendReceiveP__packetReceiveDone();
    }
  else {
#line 590
    if (CC1000SendReceiveP__count >= CC1000SendReceiveP__ACK_LENGTH - sizeof CC1000SendReceiveP__ackCode) {
      CC1000SendReceiveP__HplCC1000Spi__writeByte(__extension__ ({
#line 591
        uint16_t __addr16 = (uint16_t )(uint16_t )&CC1000SendReceiveP__ackCode[CC1000SendReceiveP__count + sizeof CC1000SendReceiveP__ackCode - CC1000SendReceiveP__ACK_LENGTH];
#line 591
        uint8_t __result;

#line 591
         __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
      }
      ));
      }
    }
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 310
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}








static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMosi__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 3;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMiso__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput();
#line 46
}
#line 46
# 116 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__txMode(void )
#line 116
{
  HplCC1000SpiP__SpiMiso__makeOutput();
  HplCC1000SpiP__SpiMosi__makeOutput();
}

# 90 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__txMode(void ){
#line 90
  HplCC1000SpiP__HplCC1000Spi__txMode();
#line 90
}
#line 90
# 84 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP__CC1000Control__txMode(void ){
#line 84
  CC1000ControlP__CC1000Control__txMode();
#line 84
}
#line 84
# 206 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterAckState(void )
#line 206
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__SENDING_ACK;
  CC1000SendReceiveP__count = 0;
}

#line 87
inline static am_addr_t CC1000SendReceiveP__amAddress(void ){
#line 87
  unsigned short __nesc_result;
#line 87

#line 87
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
#line 160
static inline cc1000_header_t * CC1000SendReceiveP__getHeader(message_t * amsg)
#line 160
{
  return (cc1000_header_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->data - sizeof(cc1000_header_t ));
}

static inline cc1000_footer_t *CC1000SendReceiveP__getFooter(message_t * amsg)
#line 164
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 563
static inline void CC1000SendReceiveP__packetReceived(void )
#line 563
{
  cc1000_footer_t *rxFooter = CC1000SendReceiveP__getFooter(CC1000SendReceiveP__rxBufPtr);
  cc1000_header_t *rxHeader = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__rxBufPtr);


  __nesc_hton_leuint16(rxFooter->crc.nxdata, __nesc_ntoh_leuint16(rxFooter->crc.nxdata) == CC1000SendReceiveP__runningCrc);


  if (
#line 570
  CC1000SendReceiveP__f.ack && __nesc_ntoh_leuint16(
  rxFooter->crc.nxdata) && __nesc_ntoh_uint16(
  rxHeader->dest.nxdata) == CC1000SendReceiveP__amAddress()) 
    {
      CC1000SendReceiveP__enterAckState();
      CC1000SendReceiveP__CC1000Control__txMode();
      CC1000SendReceiveP__HplCC1000Spi__txMode();
      CC1000SendReceiveP__HplCC1000Spi__writeByte(0xaa);
    }
  else {
    CC1000SendReceiveP__packetReceiveDone();
    }
}

# 95 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__rxDone(void ){
#line 95
  CC1000CsmaP__ByteRadio__rxDone();
#line 95
}
#line 95
# 183 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterListenState(void )
#line 183
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__LISTEN_STATE;
  CC1000SendReceiveP__count = 0;
}

#line 531
static inline void CC1000SendReceiveP__rxData(uint8_t in)
#line 531
{
  uint8_t nextByte;
  cc1000_header_t *rxHeader = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__rxBufPtr);
  uint8_t rxLength = __nesc_ntoh_uint8(rxHeader->length.nxdata);


  if (rxLength > 28) 
    {

      CC1000SendReceiveP__enterListenState();
      CC1000SendReceiveP__ByteRadio__rxDone();
      return;
    }

  CC1000SendReceiveP__rxShiftBuf = (CC1000SendReceiveP__rxShiftBuf << 8) | in;
  nextByte = CC1000SendReceiveP__rxShiftBuf >> CC1000SendReceiveP__f.rxBitOffset;
  ((uint8_t * )CC1000SendReceiveP__rxBufPtr)[CC1000SendReceiveP__count++] = nextByte;


  rxLength += (unsigned short )& ((message_t *)0)->data;
  if (CC1000SendReceiveP__count <= rxLength) {
    CC1000SendReceiveP__runningCrc = crcByte(CC1000SendReceiveP__runningCrc, nextByte);
    }

  if (CC1000SendReceiveP__count == rxLength) {
      CC1000SendReceiveP__count = (unsigned short )& ((message_t *)0)->footer + (unsigned short )& ((cc1000_footer_t *)0)->crc;
    }

  if (CC1000SendReceiveP__count == (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t )) {
    CC1000SendReceiveP__packetReceived();
    }
}

# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static error_t CC1000SendReceiveP__RssiRx__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(0U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 168 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline cc1000_metadata_t * CC1000SendReceiveP__getMetadata(message_t * amsg)
#line 168
{
  return (cc1000_metadata_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t ));
}

#line 746
static inline void CC1000SendReceiveP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC1000SendReceiveP__getMetadata(msg)->timestamp.nxdata, value);
}

# 77 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__cancel(void )
#line 77
{
  if (CC1000RssiP__currentOp != CC1000RssiP__IDLE) {
    CC1000RssiP__currentOp = CC1000RssiP__CANCELLED;
    }
}

# 87 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
inline static void CC1000CsmaP__cancelRssi(void ){
#line 87
  CC1000RssiP__cancel();
#line 87
}
#line 87
#line 150
static inline void CC1000CsmaP__enterRxState(void )
#line 150
{
  CC1000CsmaP__cancelRssi();
  CC1000CsmaP__radioState = CC1000CsmaP__RX_STATE;
}

#line 437
static inline void CC1000CsmaP__ByteRadio__rx(void )
#line 437
{
  CC1000CsmaP__enterRxState();
}

# 90 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__rx(void ){
#line 90
  CC1000CsmaP__ByteRadio__rx();
#line 90
}
#line 90
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 194 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterRxState(void )
#line 194
{
  cc1000_header_t *header = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__rxBufPtr);

#line 196
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__RX_STATE;
  __nesc_hton_uint8(header->length.nxdata, sizeof  CC1000SendReceiveP__rxBufPtr->data);
  CC1000SendReceiveP__count = sizeof(message_header_t ) - sizeof(cc1000_header_t );
  CC1000SendReceiveP__runningCrc = 0;
}

# 64 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/home/rahul/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/home/rahul/tinyos-main/tos/lib/timer/LocalTime.nc"
inline static uint32_t CC1000SendReceiveP__LocalTime32khz__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 468 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__syncData(uint8_t in)
#line 468
{








  if (in == 0xaa || in == 0x55) {




    CC1000SendReceiveP__rxShiftBuf = in << 8;
    }
  else {
#line 483
    if (CC1000SendReceiveP__count++ == 0) {
      CC1000SendReceiveP__rxShiftBuf |= in;
      }
    else {
#line 485
      if (CC1000SendReceiveP__count <= 6) 
        {

          uint32_t time;
          uint16_t tmp;
          uint8_t i;

          time = CC1000SendReceiveP__LocalTime32khz__get();


          tmp = CC1000SendReceiveP__rxShiftBuf;
          CC1000SendReceiveP__rxShiftBuf = (CC1000SendReceiveP__rxShiftBuf << 8) | in;

          for (i = 0; i < 8; i++) 
            {
              tmp <<= 1;
              if (in & 0x80) {
                tmp |= 0x1;
                }
#line 503
              in <<= 1;

              if (tmp == CC1000SendReceiveP__SYNC_WORD) 
                {
                  CC1000SendReceiveP__enterRxState();
                  CC1000SendReceiveP__ByteRadio__rx();
                  CC1000SendReceiveP__f.rxBitOffset = 7 - i;

                  time -= CC1000SendReceiveP__BIT_CORRECTION[CC1000SendReceiveP__f.rxBitOffset];
                  CC1000SendReceiveP__PacketTimeStamp32khz__set(CC1000SendReceiveP__rxBufPtr, time);

                  CC1000SendReceiveP__RssiRx__read();
                }
            }
        }
      else {
        CC1000SendReceiveP__enterListenState();
        }
      }
    }
}

# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP__RssiCheckChannel__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(2U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 667 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline message_t *CC1000SendReceiveP__ByteRadio__getTxMessage(void )
#line 667
{
  return CC1000SendReceiveP__txBufPtr;
}

# 39 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static message_t *CC1000CsmaP__ByteRadio__getTxMessage(void ){
#line 39
  nx_struct message_t *__nesc_result;
#line 39

#line 39
  __nesc_result = CC1000SendReceiveP__ByteRadio__getTxMessage();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 89 "/home/rahul/tinyos-main/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/rahul/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t CC1000CsmaP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 490 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline uint16_t CC1000CsmaP__CsmaBackoff__default__congestion(message_t *m)
#line 490
{
  return (CC1000CsmaP__Random__rand16() & 0xF) + 1;
}

# 56 "/home/rahul/tinyos-main/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP__CsmaBackoff__congestion(message_t * m){
#line 56
  unsigned short __nesc_result;
#line 56

#line 56
  __nesc_result = CC1000CsmaP__CsmaBackoff__default__congestion(m);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 390 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__congestion(void )
#line 390
{
  CC1000CsmaP__macDelay = CC1000CsmaP__CsmaBackoff__congestion(CC1000CsmaP__ByteRadio__getTxMessage());
}

static inline void CC1000CsmaP__ByteRadio__idleByte(bool preamble)
#line 394
{
  if (CC1000CsmaP__f.txPending) 
    {
      if (! CC1000CsmaP__f.ccaOff && preamble) {
        CC1000CsmaP__congestion();
        }
      else {
#line 399
        if (CC1000CsmaP__macDelay && ! --CC1000CsmaP__macDelay) 
          {
            CC1000CsmaP__cancelRssi();
            CC1000CsmaP__count = 0;
            CC1000CsmaP__RssiCheckChannel__read();
          }
        }
    }
}

# 74 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__idleByte(bool preamble){
#line 74
  CC1000CsmaP__ByteRadio__idleByte(preamble);
#line 74
}
#line 74
# 188 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterSyncState(void )
#line 188
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__SYNC_STATE;
  CC1000SendReceiveP__count = 0;
  CC1000SendReceiveP__rxShiftBuf = 0;
}

#line 452
static inline void CC1000SendReceiveP__listenData(uint8_t in)
#line 452
{
  bool preamble = in == 0xaa || in == 0x55;


  if (preamble) 
    {
      CC1000SendReceiveP__count++;
      if (CC1000SendReceiveP__count > CC1K_ValidPrecursor) {
        CC1000SendReceiveP__enterSyncState();
        }
    }
  else {
#line 463
    CC1000SendReceiveP__count = 0;
    }
  CC1000SendReceiveP__ByteRadio__idleByte(preamble);
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__setWakeupTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__setWakeupTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 125 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__enterIdleState(void )
#line 125
{
  CC1000CsmaP__cancelRssi();
  CC1000CsmaP__radioState = CC1000CsmaP__IDLE_STATE;
}

static inline void CC1000CsmaP__enterIdleStateSetWakeup(void )
#line 130
{
  CC1000CsmaP__enterIdleState();
  CC1000CsmaP__setWakeupTask__postTask();
}

#line 385
static inline void CC1000CsmaP__ByteRadio__sendDone(void )
#line 385
{
  CC1000CsmaP__f.txPending = FALSE;
  CC1000CsmaP__enterIdleStateSetWakeup();
}

# 44 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__sendDone(void ){
#line 44
  CC1000CsmaP__ByteRadio__sendDone();
#line 44
}
#line 44
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP__signalPacketSent__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000SendReceiveP__signalPacketSent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 429 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__txDone(void )
#line 429
{
  CC1000SendReceiveP__signalPacketSent__postTask();
  CC1000SendReceiveP__ByteRadio__sendDone();
}

#line 250
static inline void CC1000SendReceiveP__enterTxDoneState(void )
#line 250
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXDONE_STATE;
}

#line 313
static inline void CC1000SendReceiveP__sendNextByte(void )
#line 313
{
  CC1000SendReceiveP__HplCC1000Spi__writeByte(CC1000SendReceiveP__nextTxByte);
  CC1000SendReceiveP__count++;
}

#line 391
static inline void CC1000SendReceiveP__txReadAck(uint8_t in)
#line 391
{
  unsigned char *__nesc_temp44;
  unsigned char *__nesc_temp43;
#line 392
  uint8_t i;

  CC1000SendReceiveP__sendNextByte();

  for (i = 0; i < 8; i++) 
    {
      CC1000SendReceiveP__rxShiftBuf <<= 1;
      if (in & 0x80) {
        CC1000SendReceiveP__rxShiftBuf |= 0x1;
        }
#line 401
      in <<= 1;

      if (CC1000SendReceiveP__rxShiftBuf == CC1000SendReceiveP__ACK_WORD) 
        {
          (__nesc_temp43 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__txBufPtr)->metadataBits.nxdata, __nesc_hton_uint8(__nesc_temp43, __nesc_ntoh_uint8(__nesc_temp43) | CC1000_ACK_BIT));
          CC1000SendReceiveP__enterTxDoneState();
          return;
        }
    }
  if (CC1000SendReceiveP__count >= CC1000SendReceiveP__MAX_ACK_WAIT) 
    {
      (__nesc_temp44 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__txBufPtr)->metadataBits.nxdata, __nesc_hton_uint8(__nesc_temp44, __nesc_ntoh_uint8(__nesc_temp44) & ~CC1000_ACK_BIT));
      CC1000SendReceiveP__enterTxDoneState();
    }
}

#line 244
static inline void CC1000SendReceiveP__enterTxReadAckState(void )
#line 244
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXREADACK_STATE;
  CC1000SendReceiveP__rxShiftBuf = 0;
  CC1000SendReceiveP__count = 0;
}

#line 380
static inline void CC1000SendReceiveP__txWaitForAck(void )
#line 380
{
  CC1000SendReceiveP__sendNextByte();
  if (CC1000SendReceiveP__count == 1) 
    {
      CC1000SendReceiveP__HplCC1000Spi__rxMode();
      CC1000SendReceiveP__CC1000Control__rxMode();
    }
  else {
#line 387
    if (CC1000SendReceiveP__count > 3) {
      CC1000SendReceiveP__enterTxReadAckState();
      }
    }
}

#line 239
static inline void CC1000SendReceiveP__enterTxWaitForAckState(void )
#line 239
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXWAITFORACK_STATE;
  CC1000SendReceiveP__count = 0;
}

#line 367
static inline void CC1000SendReceiveP__txFlush(void )
#line 367
{
  CC1000SendReceiveP__sendNextByte();
  if (CC1000SendReceiveP__count > 3) {
    if (CC1000SendReceiveP__f.ack) {
      CC1000SendReceiveP__enterTxWaitForAckState();
      }
    else {
        CC1000SendReceiveP__HplCC1000Spi__rxMode();
        CC1000SendReceiveP__CC1000Control__rxMode();
        CC1000SendReceiveP__enterTxDoneState();
      }
    }
}

#line 234
static inline void CC1000SendReceiveP__enterTxFlushState(void )
#line 234
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXFLUSH_STATE;
  CC1000SendReceiveP__count = 0;
}

#line 361
static inline void CC1000SendReceiveP__txCrc(void )
#line 361
{
  CC1000SendReceiveP__sendNextByte();
  CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__runningCrc >> 8;
  CC1000SendReceiveP__enterTxFlushState();
}

# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 230 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterTxCrcState(void )
#line 230
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXCRC_STATE;
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 776 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline bool CC1000SendReceiveP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC1000SendReceiveP__getMetadata(msg)->timesync.nxdata);
}

#line 333
static inline void CC1000SendReceiveP__txData(void )
#line 333
{
  unsigned char *__nesc_temp42;
#line 334
  cc1000_header_t *txHeader = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__txBufPtr);

#line 335
  CC1000SendReceiveP__sendNextByte();

  if (CC1000SendReceiveP__nextTxByte == CC1000SendReceiveP__SYNC_BYTE2) {

      uint32_t time32khz = CC1000SendReceiveP__LocalTime32khz__get();

#line 340
      CC1000SendReceiveP__PacketTimeStamp32khz__set(CC1000SendReceiveP__txBufPtr, time32khz);

      if (CC1000SendReceiveP__PacketTimeSyncOffset__isSet(CC1000SendReceiveP__txBufPtr)) {
          timesync_radio_t *timesync = (timesync_radio_t *)((void *)CC1000SendReceiveP__txBufPtr + CC1000SendReceiveP__PacketTimeSyncOffset__get(CC1000SendReceiveP__txBufPtr));

          (__nesc_temp42 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp42, __nesc_ntoh_uint32(__nesc_temp42) - time32khz));
        }
    }

  if (CC1000SendReceiveP__count < __nesc_ntoh_uint8(txHeader->length.nxdata) + sizeof(message_header_t )) 
    {
      CC1000SendReceiveP__nextTxByte = ((uint8_t *)CC1000SendReceiveP__txBufPtr)[CC1000SendReceiveP__count];
      CC1000SendReceiveP__runningCrc = crcByte(CC1000SendReceiveP__runningCrc, CC1000SendReceiveP__nextTxByte);
    }
  else 
    {
      CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__runningCrc;
      CC1000SendReceiveP__enterTxCrcState();
    }
}

#line 222
static inline void CC1000SendReceiveP__enterTxDataState(void )
#line 222
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXDATA_STATE;



  CC1000SendReceiveP__count = sizeof(message_header_t ) - sizeof(cc1000_header_t ) - 1;
}

#line 327
static inline void CC1000SendReceiveP__txSync(void )
#line 327
{
  CC1000SendReceiveP__sendNextByte();
  CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__SYNC_BYTE2;
  CC1000SendReceiveP__enterTxDataState();
}

#line 218
static inline void CC1000SendReceiveP__enterTxSyncState(void )
#line 218
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXSYNC_STATE;
}

#line 318
static inline void CC1000SendReceiveP__txPreamble(void )
#line 318
{
  CC1000SendReceiveP__sendNextByte();
  if (CC1000SendReceiveP__count >= CC1000SendReceiveP__preambleLength) 
    {
      CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__SYNC_BYTE1;
      CC1000SendReceiveP__enterTxSyncState();
    }
}

#line 633
static inline void CC1000SendReceiveP__HplCC1000Spi__dataReady(uint8_t data)
#line 633
{
  if (CC1000SendReceiveP__f.invert) {
    data = ~data;
    }
  switch (CC1000SendReceiveP__radioState) 
    {
      default: break;
      case CC1000SendReceiveP__TXPREAMBLE_STATE: CC1000SendReceiveP__txPreamble();
#line 640
      break;
      case CC1000SendReceiveP__TXSYNC_STATE: CC1000SendReceiveP__txSync();
#line 641
      break;
      case CC1000SendReceiveP__TXDATA_STATE: CC1000SendReceiveP__txData();
#line 642
      break;
      case CC1000SendReceiveP__TXCRC_STATE: CC1000SendReceiveP__txCrc();
#line 643
      break;
      case CC1000SendReceiveP__TXFLUSH_STATE: CC1000SendReceiveP__txFlush();
#line 644
      break;
      case CC1000SendReceiveP__TXWAITFORACK_STATE: CC1000SendReceiveP__txWaitForAck();
#line 645
      break;
      case CC1000SendReceiveP__TXREADACK_STATE: CC1000SendReceiveP__txReadAck(data);
#line 646
      break;
      case CC1000SendReceiveP__TXDONE_STATE: CC1000SendReceiveP__txDone();
#line 647
      break;

      case CC1000SendReceiveP__LISTEN_STATE: CC1000SendReceiveP__listenData(data);
#line 649
      break;
      case CC1000SendReceiveP__SYNC_STATE: CC1000SendReceiveP__syncData(data);
#line 650
      break;
      case CC1000SendReceiveP__RX_STATE: CC1000SendReceiveP__rxData(data);
#line 651
      break;
      case CC1000SendReceiveP__SENDING_ACK: CC1000SendReceiveP__ackData(data);
#line 652
      break;
    }
}

# 103 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void HplCC1000SpiP__HplCC1000Spi__dataReady(uint8_t data){
#line 103
  CC1000SendReceiveP__HplCC1000Spi__dataReady(data);
#line 103
}
#line 103
# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 58
{
#line 58
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 61 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 103 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 153 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 153
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 87 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm128Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 97 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 216 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/rahul/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b250a477538){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2b250a477538);
#line 59
}
#line 59
# 56 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 120 "/home/rahul/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 120
{
}

# 52 "/home/rahul/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 78 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 78
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 82 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 82
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 82
}
#line 82
# 124 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  Atm128AdcP__HplAtm128Adc__enableAdc();
  return SUCCESS;
}

# 95 "/home/rahul/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 74 "/home/rahul/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void )
#line 74
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 81 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested();
#line 81
}
#line 81
# 206 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/home/rahul/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2b250a479328){
#line 61
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2b250a479328);
#line 61
}
#line 61
# 93 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 97 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 60 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 60
{
#line 60
  union __nesc_unnamed4370 {
#line 60
    Atm128Adcsra_t f;
#line 60
    uint8_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}




static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 66
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP__Adcsra2int(x);
}

# 69 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 69
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 69
}
#line 69
# 103 "/home/rahul/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 103
{

  if (MeasureClockC__cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC__cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC__cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC__cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC__cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC__cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 59
{
#line 59
  union __nesc_unnamed4371 {
#line 59
    Atm128Admux_t f;
#line 59
    uint8_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 63
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP__Admux2int(x);
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 58
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 58
}
#line 58
# 139 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 139
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 49 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 49
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 53 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 53
  struct __nesc_unnamed4251 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 204 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 204
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 224
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 229
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 235
        Atm128AdcP__f.precise;

        {
#line 235
          __nesc_atomic_end(__nesc_atomic); 
#line 235
          return __nesc_temp;
        }
      }
    }
#line 238
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 206 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__RssiConfig__getChannel(void )
#line 206
{
  return CHANNEL_RSSI;
}

# 137 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x2b250a4de7f8){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x2b250a4de7f8) {
#line 25
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 25
      __nesc_result = HplCC1000P__RssiConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x2b250a4de7f8);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 210 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__RssiConfig__getRefVoltage(void )
#line 210
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x2b250a4de7f8){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x2b250a4de7f8) {
#line 32
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 32
      __nesc_result = HplCC1000P__RssiConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x2b250a4de7f8);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 214 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__RssiConfig__getPrescaler(void )
#line 214
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x2b250a4de7f8){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x2b250a4de7f8) {
#line 39
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 39
      __nesc_result = HplCC1000P__RssiConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x2b250a4de7f8);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 69 "/home/rahul/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "/home/rahul/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/home/rahul/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/home/rahul/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2b250a479328){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2b250a479328);
#line 53
}
#line 53
# 77 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 88 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 102 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SquelchP.nc"
static inline uint16_t CC1000SquelchP__CC1000Squelch__get(void )
#line 102
{
  return CC1000SquelchP__clearThreshold;
}

# 57 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000SendReceiveP__CC1000Squelch__get(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = CC1000SquelchP__CC1000Squelch__get();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP__signalPacketReceived__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000SendReceiveP__signalPacketReceived);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 202 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterReceivedState(void )
#line 202
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__RECEIVED_STATE;
}

# 124 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/rahul/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/home/rahul/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 7);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__OC1C__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput();
#line 44
}
#line 44
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 1);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiSck__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput();
#line 44
}
#line 44
# 66 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline error_t HplCC1000SpiP__PlatformInit__init(void )
#line 66
{
  HplCC1000SpiP__SpiSck__makeInput();
  HplCC1000SpiP__OC1C__makeInput();
  HplCC1000SpiP__HplCC1000Spi__rxMode();
  return SUCCESS;
}

# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 6;
}

# 40 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PCLK__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set();
#line 40
}
#line 40
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 7;
}

# 40 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set();
#line 40
}
#line 40
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 4;
}

# 40 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PALE__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set();
#line 40
}
#line 40
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 7;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 6;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PCLK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 4;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PALE__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput();
#line 46
}
#line 46
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 6);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__CHP_OUT__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput();
#line 44
}
#line 44
# 68 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P__PlatformInit__init(void )
#line 68
{
  HplCC1000P__CHP_OUT__makeInput();
  HplCC1000P__PALE__makeOutput();
  HplCC1000P__PCLK__makeOutput();
  HplCC1000P__PDATA__makeOutput();
  HplCC1000P__PALE__set();
  HplCC1000P__PDATA__set();
  HplCC1000P__PCLK__set();


  HplCC1000P__HplCC1000__write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  HplCC1000P__HplCC1000__write(CC1K_PA_POW, 0);
  return SUCCESS;
}

# 104 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 104
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 90 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 90
{
#line 90
  union __nesc_unnamed4372 {
#line 90
    Atm128TimerCtrlCapture_t f;
#line 90
    uint16_t t;
  } 
#line 90
  c = { .f = x };

#line 90
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 97
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 80
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 80
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 70
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 70
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 72
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 140 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 140
{
#line 140
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 78 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm128Timer1P__Timer__start();
#line 78
}
#line 78
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 61
{
#line 61
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 67 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm128Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(4);
  }
  return SUCCESS;
}

# 88 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 88
{
#line 88
  union __nesc_unnamed4373 {
#line 88
    Atm128TimerCtrlCapture_t f;
#line 88
    uint16_t t;
  } 
#line 88
  c = { .f = x };

#line 88
  return c.t;
}





static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x)
#line 95
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P__TimerCtrlCapture2int(x);
}

#line 78
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void )
#line 78
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 68
static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s)
#line 68
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P__TimerCtrl__getCtrlCapture();

#line 70
  x.bits.cs = s;
  HplAtm128Timer3P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 136 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__start(void )
#line 136
{
#line 136
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 78 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void ){
#line 78
  HplAtm128Timer3P__Timer__start();
#line 78
}
#line 78
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t)
#line 59
{
#line 59
  * (volatile uint16_t *)0x88 = t;
}

# 67 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t){
#line 67
  HplAtm128Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Atm128AdcP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 41 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 23 "/home/rahul/tinyos-main/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/home/rahul/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplCC1000P__PlatformInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplCC1000SpiP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/home/rahul/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/rahul/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/rahul/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 60 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BaseStationP__uartSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BaseStationP__uartSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 42 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 42
}
#line 42
# 114 "/home/rahul/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "/home/rahul/tinyos-main/tos/interfaces/Leds.nc"
inline static void BaseStationP__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 105 "BaseStationP.nc"
static inline void BaseStationP__failBlink(void )
#line 105
{
  BaseStationP__Leds__led2Toggle();
}

#line 222
static inline void BaseStationP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error)
#line 222
{
  if (error != SUCCESS) {
    BaseStationP__failBlink();
    }
  else {
#line 226
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseStationP__uartQueue[BaseStationP__uartOut]) 
        {
          if (++BaseStationP__uartOut >= BaseStationP__UART_QUEUE_LEN) {
            BaseStationP__uartOut = 0;
            }
#line 231
          if (BaseStationP__uartFull) {
            BaseStationP__uartFull = FALSE;
            }
        }
#line 234
      __nesc_atomic_end(__nesc_atomic); }
    }
#line 234
  BaseStationP__uartSendTask__postTask();
}

# 110 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x2b250a89d220, message_t * msg, error_t error){
#line 110
  BaseStationP__UartSend__sendDone(arg_0x2b250a89d220, msg, error);
#line 110
}
#line 110
# 101 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x2b250a992020, message_t * msg, error_t error){
#line 100
  switch (arg_0x2b250a992020) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x2b250a992020, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 101 "BaseStationP.nc"
static inline void BaseStationP__dropBlink(void )
#line 101
{
  BaseStationP__Leds__led2Toggle();
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BaseStationP__radioSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BaseStationP__radioSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 237 "BaseStationP.nc"
static inline message_t *BaseStationP__UartReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 239
{
  message_t *ret = msg;
  bool reflectToken = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (!BaseStationP__radioFull) 
      {
        reflectToken = TRUE;
        ret = BaseStationP__radioQueue[BaseStationP__radioIn];
        BaseStationP__radioQueue[BaseStationP__radioIn] = msg;
        if (++BaseStationP__radioIn >= BaseStationP__RADIO_QUEUE_LEN) {
          BaseStationP__radioIn = 0;
          }
#line 251
        if (BaseStationP__radioIn == BaseStationP__radioOut) {
          BaseStationP__radioFull = TRUE;
          }
        if (!BaseStationP__radioBusy) 
          {
            BaseStationP__radioSendTask__postTask();
            BaseStationP__radioBusy = TRUE;
          }
      }
    else {
      BaseStationP__dropBlink();
      }
#line 262
    __nesc_atomic_end(__nesc_atomic); }
  if (reflectToken) {
    }


  return ret;
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x2b250a89c340, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BaseStationP__UartReceive__receive(arg_0x2b250a89c340, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x2b250a9933e0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b250a9933e0) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x2b250a9933e0, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x2b250a990308, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x2b250a990308) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x2b250a990308, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 51 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x2b250a990308){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x2b250a990308) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x2b250a990308);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 275 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 142 "BaseStationP.nc"
static inline void BaseStationP__SerialControl__stopDone(error_t error)
#line 142
{
}

# 138 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  BaseStationP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 52 "/home/rahul/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 134 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 134
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 122 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 122
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/home/rahul/tinyos-main/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 136 "BaseStationP.nc"
static inline void BaseStationP__SerialControl__startDone(error_t error)
#line 136
{
  if (error == SUCCESS) {
      BaseStationP__uartFull = FALSE;
    }
}

# 113 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  BaseStationP__SerialControl__startDone(error);
#line 113
}
#line 113
# 151 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 151
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 128 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 128
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 116 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 116
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 156 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 156
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 146 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 146
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 140 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 140
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/rahul/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/rahul/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 222 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/rahul/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 53 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 55 "/home/rahul/tinyos-main/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 55
{

  if (dt) {
#line 82
     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/home/rahul/tinyos-main/tos/lib/timer/BusyWait.nc"
inline static void CC1000CsmaP__BusyWait__wait(CC1000CsmaP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP__RssiPulseCheck__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(3U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 89 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__rxMode(void ){
#line 89
  CC1000ControlP__CC1000Control__rxMode();
#line 89
}
#line 89
# 70 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP__CC__write(uint8_t addr, uint8_t data){
#line 70
  HplCC1000P__HplCC1000__write(addr, data);
#line 70
}
#line 70
# 355 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__biasOn(void )
#line 355
{
  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_RESET_N));
}

# 104 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__biasOn(void ){
#line 104
  CC1000ControlP__CC1000Control__biasOn();
#line 104
}
#line 104
# 145 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__enterPulseCheckState(void )
#line 145
{
  CC1000CsmaP__radioState = CC1000CsmaP__PULSECHECK_STATE;
  CC1000CsmaP__count = 0;
}

# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP__RssiNoiseFloor__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(1U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 671 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline bool CC1000SendReceiveP__ByteRadio__syncing(void )
#line 671
{
  return CC1000SendReceiveP__radioState == CC1000SendReceiveP__SYNC_STATE;
}

# 85 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static bool CC1000CsmaP__ByteRadio__syncing(void ){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC1000SendReceiveP__ByteRadio__syncing();
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 267 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__WakeupTimer__fired(void )
#line 267
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      switch (CC1000CsmaP__radioState) 
        {
          case CC1000CsmaP__IDLE_STATE: 



            if (!CC1000CsmaP__ByteRadio__syncing()) 
              {
                CC1000CsmaP__cancelRssi();
                CC1000CsmaP__RssiNoiseFloor__read();
              }
          break;

          case CC1000CsmaP__POWERDOWN_STATE: 

            CC1000CsmaP__enterPulseCheckState();
          CC1000CsmaP__CC1000Control__biasOn();
          break;

          case CC1000CsmaP__PULSECHECK_STATE: 

            CC1000CsmaP__CC1000Control__rxMode();
          CC1000CsmaP__RssiPulseCheck__read();
          CC1000CsmaP__BusyWait__wait(80);
          {
#line 294
            __nesc_atomic_end(__nesc_atomic); 
#line 294
            return;
          }
        }
#line 296
      CC1000CsmaP__setWakeup();
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
}

# 204 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b250a6a0da0){
#line 83
  switch (arg_0x2b250a6a0da0) {
#line 83
    case 0U:
#line 83
      CC1000CsmaP__WakeupTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b250a6a0da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 169 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
inline static bool CC1000CsmaP__WakeupTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 73
inline static void CC1000CsmaP__WakeupTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 144 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 144
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 59
{
#line 59
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 215 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 215
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/rahul/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/rahul/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/rahul/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/rahul/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 48 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x2b250a511020, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
    /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x2b250a511020, result, val);
#line 63
}
#line 63
# 47 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x2b250a50d940){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
    __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x2b250a50d940);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/home/rahul/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/home/rahul/tinyos-main/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x2b250a4e34f8, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x2b250a4e34f8, result, val);
#line 63
}
#line 63
# 103 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

#line 86
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}





static inline error_t AdcP__ReadNow__read(uint8_t c)
#line 99
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA_NOW, c);
}

# 58 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static error_t CC1000RssiP__ActualRssi__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = AdcP__ReadNow__read(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 82 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__Resource__granted(void )
#line 82
{
  CC1000RssiP__ActualRssi__read();
}

# 202 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2b250a47a1a0){
#line 102
  switch (arg_0x2b250a47a1a0) {
#line 102
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID:
#line 102
      CC1000RssiP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2b250a47a1a0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
}

# 149 "BaseStationP.nc"
static inline message_t *BaseStationP__RadioSnoop__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 151
{
  return BaseStationP__receive(msg, payload, len);
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC1000ActiveMessageP__Snoop__receive(am_id_t arg_0x2b250a0d12f0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BaseStationP__RadioSnoop__receive(arg_0x2b250a0d12f0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 155 "BaseStationP.nc"
static inline message_t *BaseStationP__RadioReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 157
{
  return BaseStationP__receive(msg, payload, len);
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC1000ActiveMessageP__Receive__receive(am_id_t arg_0x2b250a0d2780, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BaseStationP__RadioReceive__receive(arg_0x2b250a0d2780, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 65 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t * CC1000ActiveMessageP__getHeader(message_t * amsg)
#line 65
{
  return (cc1000_header_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->data - sizeof(cc1000_header_t ));
}

#line 119
static inline am_addr_t CC1000ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 119
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 121
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 60
inline static am_addr_t CC1000ActiveMessageP__amAddress(void ){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
#line 115
static inline am_addr_t CC1000ActiveMessageP__AMPacket__address(void )
#line 115
{
  return CC1000ActiveMessageP__amAddress();
}

#line 139
static inline bool CC1000ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 139
{
  return CC1000ActiveMessageP__AMPacket__destination(amsg) == CC1000ActiveMessageP__AMPacket__address() || 
  CC1000ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 69
static inline cc1000_footer_t *CC1000ActiveMessageP__getFooter(message_t *amsg)
#line 69
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 102
static inline message_t *CC1000ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  cc1000_footer_t *msg_footer = CC1000ActiveMessageP__getFooter(msg);

#line 104
  if (__nesc_ntoh_leuint16(msg_footer->crc.nxdata) == 1) {
      if (CC1000ActiveMessageP__AMPacket__isForMe(msg)) {
          return CC1000ActiveMessageP__Receive__receive(CC1000ActiveMessageP__AMPacket__type(msg), msg, payload, len);
        }
      else {
          return CC1000ActiveMessageP__Snoop__receive(CC1000ActiveMessageP__AMPacket__type(msg), msg, payload, len);
        }
    }
  return msg;
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC1000SendReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC1000ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 594 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__signalPacketReceived__runTask(void )
#line 594
{
  message_t *pBuf;
  cc1000_header_t *pHeader;

#line 597
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP__radioState != CC1000SendReceiveP__RECEIVED_STATE) {
        {
#line 600
          __nesc_atomic_end(__nesc_atomic); 
#line 600
          return;
        }
        }
#line 602
      pBuf = CC1000SendReceiveP__rxBufPtr;
    }
#line 603
    __nesc_atomic_end(__nesc_atomic); }
  pHeader = CC1000SendReceiveP__getHeader(pBuf);
  pBuf = CC1000SendReceiveP__Receive__receive(pBuf, pBuf->data, __nesc_ntoh_uint8(pHeader->length.nxdata));
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (pBuf) {
        CC1000SendReceiveP__rxBufPtr = pBuf;
        }
#line 610
      if (CC1000SendReceiveP__radioState == CC1000SendReceiveP__RECEIVED_STATE) {
        CC1000SendReceiveP__enterListenState();
        }
#line 612
      CC1000SendReceiveP__ByteRadio__rxDone();
    }
#line 613
    __nesc_atomic_end(__nesc_atomic); }
}

# 301 "BaseStationP.nc"
static inline void BaseStationP__RadioSend__sendDone(am_id_t id, message_t *msg, error_t error)
#line 301
{
  if (error != SUCCESS) {
    BaseStationP__failBlink();
    }
  else {
#line 305
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseStationP__radioQueue[BaseStationP__radioOut]) 
        {
          if (++BaseStationP__radioOut >= BaseStationP__RADIO_QUEUE_LEN) {
            BaseStationP__radioOut = 0;
            }
#line 310
          if (BaseStationP__radioFull) {
            BaseStationP__radioFull = FALSE;
            }
        }
#line 313
      __nesc_atomic_end(__nesc_atomic); }
    }
#line 314
  BaseStationP__radioSendTask__postTask();
}

# 110 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
inline static void CC1000ActiveMessageP__AMSend__sendDone(am_id_t arg_0x2b250a0d3570, message_t * msg, error_t error){
#line 110
  BaseStationP__RadioSend__sendDone(arg_0x2b250a0d3570, msg, error);
#line 110
}
#line 110
# 88 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 88
{
  CC1000ActiveMessageP__AMSend__sendDone(CC1000ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 100 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
inline static void CC1000SendReceiveP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC1000ActiveMessageP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 417 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__signalPacketSent__runTask(void )
#line 417
{
  message_t *pBuf;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      pBuf = CC1000SendReceiveP__txBufPtr;
      CC1000SendReceiveP__f.txBusy = FALSE;
      CC1000SendReceiveP__enterListenState();
    }
#line 425
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP__Send__sendDone(pBuf, SUCCESS);
}

# 73 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SquelchP.nc"
static inline void CC1000SquelchP__CC1000Squelch__adjust(uint16_t data)
#line 73
{
  uint16_t squelchTab[CC1K_SquelchTableSize];
  uint8_t i;
#line 75
  uint8_t j;
#line 75
  uint8_t min;
  uint32_t newThreshold;

  CC1000SquelchP__squelchTable[CC1000SquelchP__squelchIndex++] = data;
  if (CC1000SquelchP__squelchIndex >= CC1K_SquelchTableSize) {
    CC1000SquelchP__squelchIndex = 0;
    }
#line 81
  if (CC1000SquelchP__squelchCount <= CC1K_SquelchCount) {
    CC1000SquelchP__squelchCount++;
    }

  memcpy(squelchTab, CC1000SquelchP__squelchTable, sizeof CC1000SquelchP__squelchTable);
  for (j = 0; ; j++) 
    {
      min = 0;
      for (i = 1; i < CC1K_SquelchTableSize; i++) 
        if (squelchTab[i] > squelchTab[min]) {
          min = i;
          }
#line 92
      if (j == 3) {
        break;
        }
#line 94
      squelchTab[min] = 0;
    }

  newThreshold = ((uint32_t )CC1000SquelchP__clearThreshold << 5) + (
  (uint32_t )squelchTab[min] << 1);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    CC1000SquelchP__clearThreshold = newThreshold / 34;
#line 99
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
inline static void CC1000CsmaP__CC1000Squelch__adjust(uint16_t data){
#line 51
  CC1000SquelchP__CC1000Squelch__adjust(data);
#line 51
}
#line 51
# 449 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__adjustSquelch__runTask(void )
#line 449
{
  uint16_t squelchData;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 452
    squelchData = CC1000CsmaP__rssiForSquelch;
#line 452
    __nesc_atomic_end(__nesc_atomic); }
  CC1000CsmaP__CC1000Squelch__adjust(squelchData);
}

#line 140
static inline void CC1000CsmaP__enterPowerDownState(void )
#line 140
{
  CC1000CsmaP__cancelRssi();
  CC1000CsmaP__radioState = CC1000CsmaP__POWERDOWN_STATE;
}

# 100 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__disableIntr(void )
#line 100
{
  * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
  * (volatile uint8_t *)(0x17 + 0x20) |= 1 << 0;
  * (volatile uint8_t *)(0x18 + 0x20) &= ~(1 << 0);
}

# 80 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__disableIntr(void ){
#line 80
  HplCC1000SpiP__HplCC1000Spi__disableIntr();
#line 80
}
#line 80
# 179 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterInactiveState(void )
#line 179
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__INACTIVE_STATE;
}

#line 447
static inline void CC1000SendReceiveP__ByteRadio__off(void )
#line 447
{
  CC1000SendReceiveP__enterInactiveState();
  CC1000SendReceiveP__HplCC1000Spi__disableIntr();
}

# 66 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__off(void ){
#line 66
  CC1000SendReceiveP__ByteRadio__off();
#line 66
}
#line 66
# 79 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__off(void ){
#line 79
  CC1000ControlP__CC1000Control__off();
#line 79
}
#line 79
# 169 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__radioOff(void )
#line 169
{
  CC1000CsmaP__CC1000Control__off();
  CC1000CsmaP__ByteRadio__off();
}

# 106 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SquelchP.nc"
static inline bool CC1000SquelchP__CC1000Squelch__settled(void )
#line 106
{
  return CC1000SquelchP__squelchCount > CC1K_SquelchCount;
}

# 64 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
inline static bool CC1000CsmaP__CC1000Squelch__settled(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC1000SquelchP__CC1000Squelch__settled();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 304 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__sleepCheck__runTask(void )
#line 304
{
  bool turnOn = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP__f.txPending || !CC1000CsmaP__sleepTime) 
      {
        if (CC1000CsmaP__radioState == CC1000CsmaP__PULSECHECK_STATE || CC1000CsmaP__radioState == CC1000CsmaP__POWERDOWN_STATE) 
          {
            CC1000CsmaP__enterIdleStateSetWakeup();
            turnOn = TRUE;
          }
      }
    else {
#line 316
      if (CC1000CsmaP__CC1000Squelch__settled() && !CC1000CsmaP__ByteRadio__syncing()) 
        {
          CC1000CsmaP__radioOff();
          CC1000CsmaP__enterPowerDownState();
          CC1000CsmaP__setWakeup();
        }
      }
#line 322
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOn) {
    CC1000CsmaP__radioOn();
    }
}

# 345 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__coreOn(void )
#line 345
{

  CC1000ControlP__CC__write(CC1K_MAIN, ((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
}

# 96 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__coreOn(void ){
#line 96
  CC1000ControlP__CC1000Control__coreOn();
#line 96
}
#line 96
# 93 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__enableIntr(void )
#line 93
{

  * (volatile uint8_t *)(0x0D + 0x20) = 0xc0;
  * (volatile uint8_t *)(0x17 + 0x20) &= ~(1 << 0);
}

# 75 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__enableIntr(void ){
#line 75
  HplCC1000SpiP__HplCC1000Spi__enableIntr();
#line 75
}
#line 75
# 130 "BaseStationP.nc"
static inline void BaseStationP__RadioControl__startDone(error_t error)
#line 130
{
  if (error == SUCCESS) {
      BaseStationP__radioFull = FALSE;
    }
}

# 113 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP__SplitControl__startDone(error_t error){
#line 113
  BaseStationP__RadioControl__startDone(error);
#line 113
}
#line 113
# 143 "BaseStationP.nc"
static inline void BaseStationP__RadioControl__stopDone(error_t error)
#line 143
{
}

# 138 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP__SplitControl__stopDone(error_t error){
#line 138
  BaseStationP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 186 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__startStopDone__runTask(void )
#line 186
{
  uint8_t s;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 190
    s = CC1000CsmaP__radioState;
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  if (s == CC1000CsmaP__DISABLED_STATE) {
    CC1000CsmaP__SplitControl__stopDone(SUCCESS);
    }
  else {
#line 194
    CC1000CsmaP__SplitControl__startDone(SUCCESS);
    }
}

#line 263
static inline void CC1000CsmaP__setWakeupTask__runTask(void )
#line 263
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 264
    CC1000CsmaP__setWakeup();
#line 264
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 42
}
#line 42
# 84 "/home/rahul/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/Leds.nc"
inline static void BaseStationP__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 334
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 334
{
#line 334
  __nesc_hton_uint16(target, value);
#line 334
  return value;
}

#line 334
static __inline  int16_t __nesc_ntoh_int16(const void * source)
#line 334
{
#line 334
  return __nesc_ntoh_uint16(source);
}

# 659 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__ByteRadio__setPreambleLength(uint16_t bytes)
#line 659
{
  /* atomic removed: atomic calls only */
#line 660
  CC1000SendReceiveP__preambleLength = bytes;
}

# 50 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__setPreambleLength(uint16_t bytes){
#line 50
  CC1000SendReceiveP__ByteRadio__setPreambleLength(bytes);
#line 50
}
#line 50
# 121 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline cc1000_metadata_t * CC1000CsmaP__getMetadata(message_t * amsg)
#line 121
{
  return (cc1000_metadata_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t ));
}

#line 544
static inline void CC1000CsmaP__setPreambleLength(message_t * msg)
#line 544
{
  cc1000_metadata_t *meta = CC1000CsmaP__getMetadata(msg);
  uint16_t s;
  uint32_t plen;

  if (__nesc_ntoh_int16(meta->strength_or_preamble.nxdata) >= 0) {
    s = CC1000CsmaP__sleepTime;
    }
  else {
#line 552
    s = -(__nesc_ntoh_int16(meta->strength_or_preamble.nxdata) + 1);
    }
#line 553
  __nesc_hton_int16(meta->strength_or_preamble.nxdata, 0);

  if (s == 0) {
    plen = 6;
    }
  else {
#line 558
    plen = (s * 614UL >> 8) + 22;
    }
#line 559
  CC1000CsmaP__ByteRadio__setPreambleLength(plen);
}

#line 485
static inline uint16_t CC1000CsmaP__CsmaBackoff__default__initial(message_t *m)
#line 485
{

  return (CC1000CsmaP__Random__rand16() & 0x1F) + 1;
}

# 48 "/home/rahul/tinyos-main/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP__CsmaBackoff__initial(message_t * m){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = CC1000CsmaP__CsmaBackoff__default__initial(m);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__sleepCheck__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__sleepCheck);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 369 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__ByteRadio__rts(message_t * msg)
#line 369
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      CC1000CsmaP__f.txPending = TRUE;

      if (CC1000CsmaP__radioState == CC1000CsmaP__POWERDOWN_STATE) {
        CC1000CsmaP__sleepCheck__postTask();
        }
#line 376
      if (! CC1000CsmaP__f.ccaOff) {
        CC1000CsmaP__macDelay = CC1000CsmaP__CsmaBackoff__initial(CC1000CsmaP__ByteRadio__getTxMessage());
        }
      else {
#line 379
        CC1000CsmaP__macDelay = 1;
        }
      CC1000CsmaP__setPreambleLength(msg);
    }
#line 382
    __nesc_atomic_end(__nesc_atomic); }
}

# 25 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__rts(message_t * msg){
#line 25
  CC1000CsmaP__ByteRadio__rts(msg);
#line 25
}
#line 25
# 278 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP__Send__send(message_t *msg, uint8_t len)
#line 278
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP__f.txBusy || CC1000SendReceiveP__radioState == CC1000SendReceiveP__OFF_STATE) 
        {
          unsigned char __nesc_temp = 
#line 282
          FAIL;

          {
#line 282
            __nesc_atomic_end(__nesc_atomic); 
#line 282
            return __nesc_temp;
          }
        }
      else 
#line 283
        {
          cc1000_header_t *header = CC1000SendReceiveP__getHeader(msg);
          cc1000_metadata_t *metadata = CC1000SendReceiveP__getMetadata(msg);

          CC1000SendReceiveP__f.txBusy = TRUE;
          __nesc_hton_uint8(header->length.nxdata, len);
          CC1000SendReceiveP__txBufPtr = msg;

          __nesc_hton_int8(metadata->timesync.nxdata, FALSE);
          __nesc_hton_uint32(metadata->timestamp.nxdata, CC1000_INVALID_TIMESTAMP);
        }
    }
#line 294
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP__ByteRadio__rts(msg);

  return SUCCESS;
}

# 75 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
inline static error_t CC1000ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC1000SendReceiveP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 73 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline error_t CC1000ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 77
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->source.nxdata, CC1000ActiveMessageP__AMPacket__address());
  __nesc_hton_uint8(header->group.nxdata, TOS_AM_GROUP);
  return CC1000ActiveMessageP__SubSend__send(amsg, len);
}

# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t BaseStationP__RadioSend__send(am_id_t arg_0x2b2509fd9b28, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = CC1000ActiveMessageP__AMSend__send(arg_0x2b2509fd9b28, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 134 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP__AMPacket__setSource(message_t *amsg, am_addr_t addr)
#line 134
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 136
  __nesc_hton_uint16(header->source.nxdata, addr);
}

# 121 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void BaseStationP__RadioAMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 121
  CC1000ActiveMessageP__AMPacket__setSource(amsg, addr);
#line 121
}
#line 121
# 677 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__Packet__clear(message_t *msg)
#line 677
{
  memset(CC1000SendReceiveP__getHeader(msg), 0x0, sizeof(cc1000_header_t ));
  memset(CC1000SendReceiveP__getFooter(msg), 0x0, sizeof(cc1000_footer_t ));
  memset(CC1000SendReceiveP__getMetadata(msg), 0x0, sizeof(cc1000_metadata_t ));
}

# 65 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
inline static void BaseStationP__RadioPacket__clear(message_t * msg){
#line 65
  CC1000SendReceiveP__Packet__clear(msg);
#line 65
}
#line 65
# 147 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_id_t BaseStationP__UartAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 153 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg)
#line 153
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 155
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 88 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t BaseStationP__UartAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 148 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t BaseStationP__UartAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 122 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t BaseStationP__UartPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 270 "BaseStationP.nc"
static inline void BaseStationP__radioSendTask__runTask(void )
#line 270
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
#line 273
  am_addr_t source;
  message_t *msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseStationP__radioIn == BaseStationP__radioOut && !BaseStationP__radioFull) 
      {
        BaseStationP__radioBusy = FALSE;
        {
#line 280
          __nesc_atomic_end(__nesc_atomic); 
#line 280
          return;
        }
      }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseStationP__radioQueue[BaseStationP__radioOut];
  len = BaseStationP__UartPacket__payloadLength(msg);
  addr = BaseStationP__UartAMPacket__destination(msg);
  source = BaseStationP__UartAMPacket__source(msg);
  id = BaseStationP__UartAMPacket__type(msg);

  BaseStationP__RadioPacket__clear(msg);
  BaseStationP__RadioAMPacket__setSource(msg, source);

  if (BaseStationP__RadioSend__send(id, addr, msg, len) == SUCCESS) {
    BaseStationP__Leds__led0Toggle();
    }
  else {
      BaseStationP__failBlink();
      BaseStationP__radioSendTask__postTask();
    }
}

# 57 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "/home/rahul/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/home/rahul/tinyos-main/tos/interfaces/Leds.nc"
inline static void BaseStationP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 538 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/home/rahul/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x2b250a990308, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x2b250a990308) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x2b250a990308, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/home/rahul/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 131 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

#line 68
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "/home/rahul/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t BaseStationP__UartSend__send(am_id_t arg_0x2b2509fdc678, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x2b2509fdc678, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 189 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(message_t *msg, am_group_t group)
#line 189
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 191
  __nesc_hton_uint8(header->group.nxdata, group);
}

# 187 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void BaseStationP__UartAMPacket__setGroup(message_t * amsg, am_group_t grp){
#line 187
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(amsg, grp);
#line 187
}
#line 187
# 163 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr)
#line 163
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 165
  __nesc_hton_uint16(header->src.nxdata, addr);
}

# 121 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void BaseStationP__UartAMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 121
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(amsg, addr);
#line 121
}
#line 121
# 117 "/home/rahul/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg)
#line 117
{
  memset(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg), 0, sizeof(serial_header_t ));
  return;
}

# 65 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
inline static void BaseStationP__UartPacket__clear(message_t * msg){
#line 65
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(msg);
#line 65
}
#line 65
# 159 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline am_group_t CC1000ActiveMessageP__AMPacket__group(message_t *msg)
#line 159
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(msg);

#line 161
  return __nesc_ntoh_uint8(header->group.nxdata);
}

# 177 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_group_t BaseStationP__RadioAMPacket__group(message_t * amsg){
#line 177
  unsigned char __nesc_result;
#line 177

#line 177
  __nesc_result = CC1000ActiveMessageP__AMPacket__group(amsg);
#line 177

#line 177
  return __nesc_result;
#line 177
}
#line 177
# 124 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline am_addr_t CC1000ActiveMessageP__AMPacket__source(message_t *amsg)
#line 124
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 126
  return __nesc_ntoh_uint16(header->source.nxdata);
}

# 88 "/home/rahul/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t BaseStationP__RadioAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = CC1000ActiveMessageP__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 78
inline static am_addr_t BaseStationP__RadioAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = CC1000ActiveMessageP__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t BaseStationP__RadioAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = CC1000ActiveMessageP__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 683 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline uint8_t CC1000SendReceiveP__Packet__payloadLength(message_t *msg)
#line 683
{
  cc1000_header_t *header = CC1000SendReceiveP__getHeader(msg);

#line 685
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/home/rahul/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t BaseStationP__RadioPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC1000SendReceiveP__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 190 "BaseStationP.nc"
static inline void BaseStationP__uartSendTask__runTask(void )
#line 190
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
#line 193
  am_addr_t src;
  message_t *msg;
  am_group_t grp;

#line 196
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseStationP__uartIn == BaseStationP__uartOut && !BaseStationP__uartFull) 
      {
        BaseStationP__uartBusy = FALSE;
        {
#line 200
          __nesc_atomic_end(__nesc_atomic); 
#line 200
          return;
        }
      }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseStationP__uartQueue[BaseStationP__uartOut];
  BaseStationP__tmpLen = len = BaseStationP__RadioPacket__payloadLength(msg);
  id = BaseStationP__RadioAMPacket__type(msg);
  addr = BaseStationP__RadioAMPacket__destination(msg);
  src = BaseStationP__RadioAMPacket__source(msg);
  grp = BaseStationP__RadioAMPacket__group(msg);
  BaseStationP__UartPacket__clear(msg);
  BaseStationP__UartAMPacket__setSource(msg, src);
  BaseStationP__UartAMPacket__setGroup(msg, grp);

  if (BaseStationP__UartSend__send(id, addr, BaseStationP__uartQueue[BaseStationP__uartOut], len) == SUCCESS) {
    BaseStationP__Leds__led1Toggle();
    }
  else {
      BaseStationP__failBlink();
      BaseStationP__uartSendTask__postTask();
    }
}

# 64 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SquelchP.nc"
static inline error_t CC1000SquelchP__Init__init(void )
#line 64
{
  uint8_t i;

  for (i = 0; i < CC1K_SquelchTableSize; i++) 
    CC1000SquelchP__squelchTable[i] = CC1K_SquelchInit;

  return SUCCESS;
}

# 114 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__calibrate(void )
#line 114
{
  CC1000ControlP__CC__write(CC1K_PA_POW, 0x00);
  CC1000ControlP__CC__write(CC1K_TEST4, 0x3f);


  CC1000ControlP__CC__write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));

  CC1000ControlP__calibrateNow();


  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP__CC__write(CC1K_CURRENT, CC1000ControlP__txCurrent);
  CC1000ControlP__CC__write(CC1K_PA_POW, 0);

  CC1000ControlP__calibrateNow();

  CC1000ControlP__CC1000Control__rxMode();
}

#line 298
static inline void CC1000ControlP__CC1000Control__tunePreset(uint8_t freq)
#line 298
{
  int i;


  for (i = CC1K_FREQ_2A; i <= CC1K_PLL; i++) 
    CC1000ControlP__CC__write(i, __extension__ ({
#line 303
      uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][i];
#line 303
      uint8_t __result;

#line 303
       __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
    }
    ));
#line 304
  CC1000ControlP__CC__write(CC1K_MATCH, __extension__ ({
#line 304
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH];
#line 304
    uint8_t __result;

#line 304
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  ));
#line 305
  CC1000ControlP__rxCurrent = __extension__ ({
#line 305
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_CURRENT];
#line 305
    uint8_t __result;

#line 305
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 306
  CC1000ControlP__txCurrent = __extension__ ({
#line 306
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH + 1];
#line 306
    uint8_t __result;

#line 306
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 307
  CC1000ControlP__power = __extension__ ({
#line 307
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_PA_POW];
#line 307
    uint8_t __result;

#line 307
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 309
  CC1000ControlP__calibrate();
}

# 66 "/home/rahul/tinyos-main/tos/lib/timer/BusyWait.nc"
inline static void CC1000ControlP__BusyWait__wait(CC1000ControlP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 89 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline void HplCC1000P__HplCC1000__init(void )
#line 89
{
}

# 63 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP__CC__init(void ){
#line 63
  HplCC1000P__HplCC1000__init();
#line 63
}
#line 63
# 257 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__init(void )
#line 257
{
  CC1000ControlP__CC__init();


  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (1 << CC1K_BIAS_PD));

  CC1000ControlP__CC1000Control__coreOn();
  CC1000ControlP__BusyWait__wait(2000);



  CC1000ControlP__power = (8 << CC1K_PA_HIGHPOWER) | (0 << CC1K_PA_LOWPOWER);
  CC1000ControlP__CC__write(CC1K_PA_POW, CC1000ControlP__power);


  CC1000ControlP__CC__write(CC1K_LOCK_SELECT, 9 << CC1K_LOCK_SELECT);


  CC1000ControlP__CC__write(CC1K_MODEM2, 0);
  CC1000ControlP__CC__write(CC1K_MODEM1, (((
  3 << CC1K_MLIMIT) | (
  1 << CC1K_LOCK_AVG_MODE)) | (
  3 << CC1K_SETTLING)) | (
  1 << CC1K_MODEM_RESET_N));
  CC1000ControlP__CC__write(CC1K_MODEM0, ((
  5 << CC1K_BAUDRATE) | (
  1 << CC1K_DATA_FORMAT)) | (
  1 << CC1K_XOSC_FREQ));

  CC1000ControlP__CC__write(CC1K_FSCTRL, 1 << CC1K_FS_RESET_N);




  CC1000ControlP__CC1000Control__tunePreset(CC1K_434_845_MHZ);

  CC1000ControlP__CC1000Control__off();
}

# 50 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__init(void ){
#line 50
  CC1000ControlP__CC1000Control__init();
#line 50
}
#line 50
# 107 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__initSlave(void )
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
  }
}

# 85 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__initSlave(void ){
#line 85
  HplCC1000SpiP__HplCC1000Spi__initSlave();
#line 85
}
#line 85
# 254 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP__Init__init(void )
#line 254
{
  CC1000SendReceiveP__f.ack = TRUE;
  CC1000SendReceiveP__HplCC1000Spi__initSlave();
  return SUCCESS;
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
inline static error_t CC1000CsmaP__ByteRadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC1000SendReceiveP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 179 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline error_t CC1000CsmaP__Init__init(void )
#line 179
{
  CC1000CsmaP__ByteRadioInit__init();
  CC1000CsmaP__CC1000Control__init();

  return SUCCESS;
}

# 61 "/home/rahul/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 55 "/home/rahul/tinyos-main/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 131 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 85 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 85
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 207 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 207
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 216 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/home/rahul/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 190 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 190
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 96
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 96
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128UartP__Uart0Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC1000CsmaP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC1000SquelchP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 7)) != 0;
}

# 43 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool HplCC1000P__PDATA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 6);
}

# 41 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PCLK__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 59 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 7);
}

# 44 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput();
#line 44
}
#line 44
# 56 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 7);
}

# 41 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr();
#line 41
}
#line 41
# 56 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 4);
}

# 41 "/home/rahul/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PALE__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 41
}
#line 41
# 157 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__HplCC1000__read(uint8_t addr)
#line 157
{
  int cnt;
  uint8_t din;
  uint8_t data = 0;


  addr <<= 1;
  HplCC1000P__PALE__clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P__PDATA__set();
        }
      else {
#line 170
        HplCC1000P__PDATA__clr();
        }
#line 171
      HplCC1000P__PCLK__clr();
      HplCC1000P__PCLK__set();
      addr <<= 1;
    }
  HplCC1000P__PDATA__clr();
  HplCC1000P__PCLK__clr();
  HplCC1000P__PCLK__set();

  HplCC1000P__PDATA__makeInput();
  HplCC1000P__PALE__set();


  for (cnt = 7; cnt >= 0; cnt--) 
    {
      HplCC1000P__PCLK__clr();
      din = HplCC1000P__PDATA__get();
      if (din) {
        data = (data << 1) | 0x01;
        }
      else {
#line 190
        data = (data << 1) & 0xfe;
        }
#line 191
      HplCC1000P__PCLK__set();
    }

  HplCC1000P__PALE__set();
  HplCC1000P__PDATA__makeOutput();
  HplCC1000P__PDATA__set();

  return data;
}

# 77 "/home/rahul/tinyos-main/tos/chips/cc1000/HplCC1000.nc"
inline static uint8_t CC1000ControlP__CC__read(uint8_t addr){
#line 77
  unsigned char __nesc_result;
#line 77

#line 77
  __nesc_result = HplCC1000P__HplCC1000__read(addr);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t BaseStationP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__startStopDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__startStopDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 393 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static inline bool CC1000ControlP__CC1000Control__getLOStatus(void )
#line 393
{


  return TRUE;
}

# 147 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Control.nc"
inline static bool CC1000SendReceiveP__CC1000Control__getLOStatus(void ){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = CC1000ControlP__CC1000Control__getLOStatus();
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 260 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP__StdControl__start(void )
#line 260
{
  /* atomic removed: atomic calls only */
  {
    CC1000SendReceiveP__enterInactiveState();
    CC1000SendReceiveP__f.txBusy = FALSE;
    CC1000SendReceiveP__f.invert = CC1000SendReceiveP__CC1000Control__getLOStatus();
  }
  return SUCCESS;
}

# 95 "/home/rahul/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t CC1000CsmaP__ByteRadioControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC1000SendReceiveP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 197 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline error_t CC1000CsmaP__SplitControl__start(void )
#line 197
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP__radioState == CC1000CsmaP__DISABLED_STATE) 
      {
        CC1000CsmaP__ByteRadioControl__start();
        CC1000CsmaP__enterIdleStateSetWakeup();
        CC1000CsmaP__f.txPending = FALSE;
      }
    else 
      {
        unsigned char __nesc_temp = 
#line 206
        SUCCESS;

        {
#line 206
          __nesc_atomic_end(__nesc_atomic); 
#line 206
          return __nesc_temp;
        }
      }
#line 208
    __nesc_atomic_end(__nesc_atomic); }
#line 208
  CC1000CsmaP__radioOn();

  CC1000CsmaP__startStopDone__postTask();

  return SUCCESS;
}

# 104 "/home/rahul/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t BaseStationP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC1000CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 109 "BaseStationP.nc"
static inline void BaseStationP__Boot__booted(void )
#line 109
{
  uint8_t i;

  for (i = 0; i < BaseStationP__UART_QUEUE_LEN; i++) 
    BaseStationP__uartQueue[i] = &BaseStationP__uartQueueBufs[i];
  BaseStationP__uartIn = BaseStationP__uartOut = 0;
  BaseStationP__uartBusy = FALSE;
  BaseStationP__uartFull = TRUE;

  for (i = 0; i < BaseStationP__RADIO_QUEUE_LEN; i++) 
    BaseStationP__radioQueue[i] = &BaseStationP__radioQueueBufs[i];
  BaseStationP__radioIn = BaseStationP__radioOut = 0;
  BaseStationP__radioBusy = FALSE;
  BaseStationP__radioFull = TRUE;

  if (BaseStationP__RadioControl__start() == EALREADY) {
    BaseStationP__radioFull = FALSE;
    }
#line 126
  if (BaseStationP__SerialControl__start() == EALREADY) {
    BaseStationP__uartFull = FALSE;
    }
}

# 60 "/home/rahul/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BaseStationP__Boot__booted();
#line 60
}
#line 60
# 164 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 164
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 179
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/home/rahul/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/home/rahul/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/home/rahul/tinyos-main/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 105 "/home/rahul/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 105
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 110
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 110
    uint8_t __result;

#line 110
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 112
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x35 + 0x20) &= ~(1 << 5);
}

# 76 "/home/rahul/tinyos-main/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/rahul/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 55 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 55
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 52
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 52
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 117
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 117
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 121
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 138
      oldSr.adif || oldSr.adsc;

#line 138
      return __nesc_temp;
    }
  }
}

# 150 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 262 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 263
{
  return FALSE;
}

# 119 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char __nesc_result;
#line 119

#line 119
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 82 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 82
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 86 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 86
}
#line 86
# 129 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 129
{
  /* atomic removed: atomic calls only */
#line 130
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/home/rahul/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/home/rahul/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/home/rahul/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/home/rahul/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/home/rahul/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/home/rahul/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b250a477538){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b250a477538);
#line 65
}
#line 65
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/home/rahul/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/home/rahul/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "/home/rahul/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/home/rahul/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 120 "/home/rahul/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 100 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__startNextOp(void )
#line 100
{
  CC1000RssiP__currentOp = CC1000RssiP__nextOp;
  if (CC1000RssiP__nextOp != CC1000RssiP__IDLE) 
    {
      CC1000RssiP__nextOp = CC1000RssiP__IDLE;
      CC1000RssiP__ActualRssi__read();
    }
  else {
    CC1000RssiP__Resource__release();
    }
}

# 61 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__listen(void ){
#line 61
  CC1000SendReceiveP__ByteRadio__listen();
#line 61
}
#line 61
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__adjustSquelch__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__adjustSquelch);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000CsmaP__CC1000Squelch__get(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = CC1000SquelchP__CC1000Squelch__get();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 329 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__RssiPulseCheck__readDone(error_t result, uint16_t data)
#line 329
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP__sleepCheck__postTask();
      return;
    }






  if (data > CC1000CsmaP__CC1000Squelch__get() - (CC1000CsmaP__CC1000Squelch__get() >> 2)) 
    {
      CC1000CsmaP__sleepCheck__postTask();

      if (data < CC1000CsmaP__CC1000Squelch__get() + (CC1000CsmaP__CC1000Squelch__get() >> 3)) 
        {

          CC1000CsmaP__rssiForSquelch = data;
          CC1000CsmaP__adjustSquelch__postTask();
        }
    }
  else {
#line 353
    if (CC1000CsmaP__count++ > 5) 
      {

        CC1000CsmaP__enterIdleStateSetWakeup();
        CC1000CsmaP__ByteRadio__listen();
      }
    else 
      {
        CC1000CsmaP__RssiPulseCheck__read();
        CC1000CsmaP__BusyWait__wait(80);
      }
    }
}

# 211 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterTxPreambleState(void )
#line 211
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXPREAMBLE_STATE;
  CC1000SendReceiveP__count = 0;
  CC1000SendReceiveP__runningCrc = 0;
  CC1000SendReceiveP__nextTxByte = 0xaa;
}

#line 300
static inline void CC1000SendReceiveP__ByteRadio__cts(void )
#line 300
{

  CC1000SendReceiveP__enterTxPreambleState();
  CC1000SendReceiveP__HplCC1000Spi__writeByte(0xaa);
  CC1000SendReceiveP__CC1000Control__txMode();
  CC1000SendReceiveP__HplCC1000Spi__txMode();
}

# 32 "/home/rahul/tinyos-main/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__cts(void ){
#line 32
  CC1000SendReceiveP__ByteRadio__cts();
#line 32
}
#line 32
# 155 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP__enterTxState(void )
#line 155
{
  CC1000CsmaP__radioState = CC1000CsmaP__TX_STATE;
}

#line 408
static inline void CC1000CsmaP__RssiCheckChannel__readDone(error_t result, uint16_t data)
#line 408
{
  if (result != SUCCESS) 
    {
      /* atomic removed: atomic calls only */
      CC1000CsmaP__macDelay = 1;
      return;
    }

  CC1000CsmaP__count++;
  if (data > CC1000CsmaP__CC1000Squelch__get() + CC1K_SquelchBuffer) {
    CC1000CsmaP__clearCount++;
    }
  else {
#line 420
    CC1000CsmaP__clearCount = 0;
    }

  if (CC1000CsmaP__clearCount >= 1 || CC1000CsmaP__f.ccaOff) 
    {
      CC1000CsmaP__enterTxState();
      CC1000CsmaP__ByteRadio__cts();
    }
  else {
#line 428
    if (CC1000CsmaP__count == CC1K_MaxRSSISamples) {
      CC1000CsmaP__congestion();
      }
    else {
#line 431
      CC1000CsmaP__RssiCheckChannel__read();
      }
    }
}

#line 456
static inline void CC1000CsmaP__RssiNoiseFloor__readDone(error_t result, uint16_t data)
#line 456
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP__sleepCheck__postTask();
      return;
    }

  CC1000CsmaP__rssiForSquelch = data;
  CC1000CsmaP__adjustSquelch__postTask();
  CC1000CsmaP__sleepCheck__postTask();
}

# 522 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__RssiRx__readDone(error_t result, uint16_t data)
#line 522
{
  cc1000_metadata_t *rxMetadata = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr);

  if (result != SUCCESS) {
    __nesc_hton_int16(rxMetadata->strength_or_preamble.nxdata, 0);
    }
  else {
#line 528
    __nesc_hton_int16(rxMetadata->strength_or_preamble.nxdata, data);
    }
}

# 120 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__Rssi__default__readDone(uint8_t reason, error_t result, uint16_t data)
#line 120
{
}

# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static void CC1000RssiP__Rssi__readDone(uint8_t arg_0x2b250a306530, error_t result, CC1000RssiP__Rssi__val_t val){
#line 66
  switch (arg_0x2b250a306530) {
#line 66
    case 0U:
#line 66
      CC1000SendReceiveP__RssiRx__readDone(result, val);
#line 66
      break;
#line 66
    case 1U:
#line 66
      CC1000CsmaP__RssiNoiseFloor__readDone(result, val);
#line 66
      break;
#line 66
    case 2U:
#line 66
      CC1000CsmaP__RssiCheckChannel__readDone(result, val);
#line 66
      break;
#line 66
    case 3U:
#line 66
      CC1000CsmaP__RssiPulseCheck__readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      CC1000RssiP__Rssi__default__readDone(arg_0x2b250a306530, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 111 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__ActualRssi__readDone(error_t result, uint16_t data)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      CC1000RssiP__Rssi__readDone(CC1000RssiP__currentOp, result, data);
      CC1000RssiP__startNextOp();
    }
#line 117
    __nesc_atomic_end(__nesc_atomic); }
}

# 150 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/home/rahul/tinyos-main/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x2b250a4e1280, error_t result, AdcP__ReadNow__val_t val){
#line 66
  switch (arg_0x2b250a4e1280) {
#line 66
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 66
      CC1000RssiP__ActualRssi__readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      AdcP__ReadNow__default__readDone(arg_0x2b250a4e1280, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 108 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 87 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 87
{
#line 87
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 95 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 95
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 95
}
#line 95
# 144 "/home/rahul/tinyos-main/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 144
{
  bool precise;
#line 145
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 172
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 180
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 200
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 156 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 156
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 156
}
#line 156
# 149 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 149
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/home/rahul/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 88 "/home/rahul/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei");}

# 141 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 141
{
#line 141
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 230 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 203 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__default__fired(void )
#line 203
{
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 58
  HplAtm128Timer1P__CompareA__default__fired();
#line 58
}
#line 58
# 207 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__default__fired(void )
#line 207
{
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 58
  HplAtm128Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 211 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__default__fired(void )
#line 211
{
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 58
  HplAtm128Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 215 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__default__captured(uint16_t time)
#line 215
{
}

# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 60
  HplAtm128Timer1P__Capture__default__captured(t);
#line 60
}
#line 60
# 197 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Capture__get(void )
#line 197
{
#line 197
  return * (volatile uint16_t *)(0x26 + 0x20);
}

# 58 "/home/rahul/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/rahul/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
}
#line 70
# 397 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/home/rahul/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/home/rahul/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/home/rahul/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/home/rahul/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/home/rahul/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/home/rahul/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 286 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 286
{
}

# 49 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 285 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 285
{
}

# 47 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 197 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareA__default__fired(void )
#line 197
{
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareA__fired(void ){
#line 58
  HplAtm128Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 201 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareB__default__fired(void )
#line 201
{
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareB__fired(void ){
#line 58
  HplAtm128Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 205 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareC__default__fired(void )
#line 205
{
}

# 58 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareC__fired(void ){
#line 58
  HplAtm128Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 209 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time)
#line 209
{
}

# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t){
#line 60
  HplAtm128Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 191 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Capture__get(void )
#line 191
{
#line 191
  return * (volatile uint16_t *)0x80;
}

# 216 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/rahul/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/home/rahul/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow();
}

# 60 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void )
#line 60
{
}

# 70 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow();
#line 70
}
#line 70
# 73 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 73
{
  register uint8_t temp = * (volatile uint8_t *)(0x0F + 0x20);

#line 75
  * (volatile uint8_t *)(0x0F + 0x20) = HplCC1000SpiP__outgoingByte;
  HplCC1000SpiP__HplCC1000Spi__dataReady(temp);
}

# 80 "/home/rahul/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

  /* atomic removed: atomic calls only */
#line 84
  {
    /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
    /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 87
    if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
      }
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
      rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
    }
  }
  return rv;
}

# 781 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static uint8_t CC1000SendReceiveP__PacketTimeSyncOffset__get(message_t *msg)
{
  return sizeof(cc1000_header_t ) + __nesc_ntoh_uint8(CC1000SendReceiveP__getHeader(msg)->length.nxdata) - sizeof(timesync_radio_t );
}

# 92 "/home/rahul/tinyos-main/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 336 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__CC1000Control__rxMode(void )
#line 336
{


  CC1000ControlP__CC__write(CC1K_CURRENT, CC1000ControlP__rxCurrent);
  CC1000ControlP__CC__write(CC1K_PA_POW, 0);
  CC1000ControlP__CC__write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));
  CC1000ControlP__BusyWait__wait(125);
}

# 105 "/home/rahul/tinyos-main/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static void HplCC1000P__HplCC1000__write(uint8_t addr, uint8_t data)
#line 105
{
  char cnt = 0;


  addr <<= 1;
  HplCC1000P__PALE__clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P__PDATA__set();
        }
      else {
#line 116
        HplCC1000P__PDATA__clr();
        }
#line 117
      HplCC1000P__PCLK__clr();
      HplCC1000P__PCLK__set();
      addr <<= 1;
    }
  HplCC1000P__PDATA__set();
  HplCC1000P__PCLK__clr();
  HplCC1000P__PCLK__set();

  HplCC1000P__PALE__set();


  for (cnt = 0; cnt < 8; cnt++) 
    {
      if (data & 0x80) {
        HplCC1000P__PDATA__set();
        }
      else {
#line 133
        HplCC1000P__PDATA__clr();
        }
#line 134
      HplCC1000P__PCLK__clr();
      HplCC1000P__PCLK__set();
      data <<= 1;
    }
  HplCC1000P__PALE__set();
  HplCC1000P__PDATA__set();
  HplCC1000P__PCLK__set();
}

# 170 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/home/rahul/tinyos-main/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 73
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 86 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000RssiP.nc"
static error_t CC1000RssiP__Rssi__read(uint8_t reason)
#line 86
{
  if (CC1000RssiP__currentOp == CC1000RssiP__IDLE) 
    {
      CC1000RssiP__currentOp = reason;
      if (CC1000RssiP__Resource__immediateRequest() == SUCCESS) {
        CC1000RssiP__ActualRssi__read();
        }
      else {
#line 93
        CC1000RssiP__Resource__request();
        }
    }
  else {
#line 96
    CC1000RssiP__nextOp = reason;
    }
#line 97
  return SUCCESS;
}

# 133 "/home/rahul/tinyos-main/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 82 "/home/rahul/tinyos-main/tos/chips/atm128/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 75 "/home/rahul/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 441 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP__ByteRadio__rxDone(void )
#line 441
{
  if (CC1000CsmaP__radioState == CC1000CsmaP__RX_STATE) {
    CC1000CsmaP__enterIdleStateSetWakeup();
    }
}

# 106 "/home/rahul/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 322 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__CC1000Control__txMode(void )
#line 322
{

  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP__CC__write(CC1K_CURRENT, CC1000ControlP__txCurrent);
  CC1000ControlP__BusyWait__wait(250);
  CC1000ControlP__CC__write(CC1K_PA_POW, CC1000ControlP__power);
  CC1000ControlP__BusyWait__wait(20);
}

# 616 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP__packetReceiveDone(void )
#line 616
{
  unsigned char *__nesc_temp46;
  unsigned char *__nesc_temp45;
#line 617
  uint16_t snr;

  snr = (uint16_t )__nesc_ntoh_int16(CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr)->strength_or_preamble.nxdata);


  if (snr + CC1000_WHITE_BIT_THRESH < CC1000SendReceiveP__CC1000Squelch__get()) {
      (__nesc_temp45 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr)->metadataBits.nxdata, __nesc_hton_uint8(__nesc_temp45, __nesc_ntoh_uint8(__nesc_temp45) | CC1000_WHITE_BIT));
    }
  else {
      (__nesc_temp46 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr)->metadataBits.nxdata, __nesc_hton_uint8(__nesc_temp46, __nesc_ntoh_uint8(__nesc_temp46) & ~CC1000_WHITE_BIT));
    }

  CC1000SendReceiveP__signalPacketReceived__postTask();
  CC1000SendReceiveP__enterReceivedState();
}

# 63 "/home/rahul/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/home/rahul/tinyos-main/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/rahul/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b2509d22108){
#line 75
  switch (arg_0x2b2509d22108) {
#line 75
    case BaseStationP__uartSendTask:
#line 75
      BaseStationP__uartSendTask__runTask();
#line 75
      break;
#line 75
    case BaseStationP__radioSendTask:
#line 75
      BaseStationP__radioSendTask__runTask();
#line 75
      break;
#line 75
    case CC1000CsmaP__setWakeupTask:
#line 75
      CC1000CsmaP__setWakeupTask__runTask();
#line 75
      break;
#line 75
    case CC1000CsmaP__startStopDone:
#line 75
      CC1000CsmaP__startStopDone__runTask();
#line 75
      break;
#line 75
    case CC1000CsmaP__sleepCheck:
#line 75
      CC1000CsmaP__sleepCheck__runTask();
#line 75
      break;
#line 75
    case CC1000CsmaP__adjustSquelch:
#line 75
      CC1000CsmaP__adjustSquelch__runTask();
#line 75
      break;
#line 75
    case CC1000SendReceiveP__signalPacketSent:
#line 75
      CC1000SendReceiveP__signalPacketSent__runTask();
#line 75
      break;
#line 75
    case CC1000SendReceiveP__signalPacketReceived:
#line 75
      CC1000SendReceiveP__signalPacketReceived__runTask();
#line 75
      break;
#line 75
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b2509d22108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 57 "/home/rahul/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 357 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/home/rahul/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 173 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 173
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
}

# 518 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 161 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 73 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 231 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP__setWakeup(void )
#line 231
{
  switch (CC1000CsmaP__radioState) 
    {
      case CC1000CsmaP__IDLE_STATE: 




        if (!CC1000CsmaP__WakeupTimer__isRunning()) {
          if (CC1000CsmaP__CC1000Squelch__settled()) 
            {
              if (CC1000CsmaP__sleepTime == 0) {
                CC1000CsmaP__WakeupTimer__startOneShot(CC1K_SquelchIntervalSlow);
                }
              else {

                CC1000CsmaP__WakeupTimer__startOneShot(CC1000CsmaP__TIME_AFTER_CHECK);
                }
            }
          else {
#line 250
            CC1000CsmaP__WakeupTimer__startOneShot(CC1K_SquelchIntervalFast);
            }
          }
#line 251
      break;
      case CC1000CsmaP__PULSECHECK_STATE: 

        CC1000CsmaP__WakeupTimer__startOneShot(1);
      break;
      case CC1000CsmaP__POWERDOWN_STATE: 

        CC1000CsmaP__WakeupTimer__startOneShot(CC1000CsmaP__sleepTime);
      break;
    }
}

# 159 "/home/rahul/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 212 "/home/rahul/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 161 "BaseStationP.nc"
static message_t *BaseStationP__receive(message_t *msg, void *payload, uint8_t len)
#line 161
{
  message_t *ret = msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 164
    {
      if (!BaseStationP__uartFull) 
        {
          ret = BaseStationP__uartQueue[BaseStationP__uartIn];
          BaseStationP__uartQueue[BaseStationP__uartIn] = msg;

          BaseStationP__uartIn = (BaseStationP__uartIn + 1) % BaseStationP__UART_QUEUE_LEN;

          if (BaseStationP__uartIn == BaseStationP__uartOut) {
            BaseStationP__uartFull = TRUE;
            }
          if (!BaseStationP__uartBusy) 
            {
              BaseStationP__uartSendTask__postTask();
              BaseStationP__uartBusy = TRUE;
            }
        }
      else {
        BaseStationP__dropBlink();
        }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}

# 144 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_id_t CC1000ActiveMessageP__AMPacket__type(message_t *amsg)
#line 144
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 146
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 364 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__CC1000Control__off(void )
#line 364
{

  CC1000ControlP__CC__write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  CC1000ControlP__CC__write(CC1K_PA_POW, 0);
}

# 161 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP__radioOn(void )
#line 161
{
  CC1000CsmaP__CC1000Control__coreOn();
  CC1000CsmaP__BusyWait__wait(2000);
  CC1000CsmaP__CC1000Control__biasOn();
  CC1000CsmaP__BusyWait__wait(200);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 166
    CC1000CsmaP__ByteRadio__listen();
#line 166
    __nesc_atomic_end(__nesc_atomic); }
}

# 440 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP__ByteRadio__listen(void )
#line 440
{
  CC1000SendReceiveP__enterListenState();
  CC1000SendReceiveP__CC1000Control__rxMode();
  CC1000SendReceiveP__HplCC1000Spi__rxMode();
  CC1000SendReceiveP__HplCC1000Spi__enableIntr();
}

# 101 "/home/rahul/tinyos-main/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__calibrateNow(void )
#line 101
{

  CC1000ControlP__CC__write(CC1K_CAL, ((
  1 << CC1K_CAL_START) | (
  1 << CC1K_CAL_WAIT)) | (
  6 << CC1K_CAL_ITERATE));
  while ((CC1000ControlP__CC__read(CC1K_CAL) & (1 << CC1K_CAL_COMPLETE)) == 0) 
    ;


  CC1000ControlP__CC__write(CC1K_CAL, (1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE));
}

# 108 "/home/rahul/tinyos-main/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 108
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 187 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 187
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 193
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 204 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 204
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 208
{
  HplAtm128Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 212
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 216
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 220
{
  HplAtm128Timer1P__Timer__overflow();
}

# 180 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 180
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 412 "/home/rahul/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 296 "/home/rahul/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 186 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 186
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/home/rahul/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 274 "/home/rahul/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 274
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 279
__attribute((interrupt))   void __vector_32(void )
#line 279
{
  HplAtm128UartP__HplUart1__txDone();
}

# 198 "/home/rahul/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 198
{
  HplAtm128Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 202
{
  HplAtm128Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 206
{
  HplAtm128Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 210
{
  HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_29(void )
#line 214
{
  HplAtm128Timer3P__Timer__overflow();
}

