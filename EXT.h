/*
 * EXT.h
 *
 * Created: 10/2/2022 5:16:41 PM
 *  Author: gehad
 */ 


#ifndef EXT_H_
#define EXT_H_

#include "Bit_Math.h"
#include "EXT_Cfg.h"

#define      GLOBAL_INTERRUPT_ENABLE            1
#define      GLOBAL_INTERRUPT_DISABLE           0


#define     EXTERNAL_INT0                       6
#define     EXTERNAL_INT1                       5
#define     EXTERNAL_INT2                       7


#define     INT0_TRIGGER_LOW_LEVEL              0
#define     INT0_TRIGGER_RISING_EDGE            1
#define     INT0_TRIGGER_FALLING_EDGE0          2
#define     INT0_TRIGGER_ANY_LOGGICAL_CHANGE    3

#define     INT1_TRIGGER_LOW_LEVEL              0
#define     INT1_TRIGGER_RISING_EDGE            1
#define     INT1_TRIGGER_FALLING_EDGE0          2
#define     INT1_TRIGGER_ANY_LOGGICAL_CHANGE    3

#define     INT2_TRIGGER_RISING_EDGE            0
#define     INT2_TRIGGER_FALLING_EDGE0          1



void Set_GlobalInterrupt(void);

void ExternalINT0_Init(void);

void ExternalINT1_Init(void);

void ExternalINT2_Init(void);

#endif /* EXT_H_ */