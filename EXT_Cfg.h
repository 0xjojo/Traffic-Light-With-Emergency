/*
 * EXT_Cfg.h
 *
 * Created: 10/2/2022 5:26:31 PM
 *  Author: gehad
 */ 


#ifndef EXT_CFG_H_
#define EXT_CFG_H_
#include "STD_types.h"
#define GICR   (*(volatile u8*)(0x5B))
#define MCUCR  (*(volatile u8*)(0x55))
#define MCUCSR (*(volatile u8*)(0x54))
#define GIFR   (*(volatile u8*)(0x5A))
#define SREG   (*(volatile u8*)(0x5F))

#define    GLOBAL_INTERRUPT        GLOBAL_INTERRUPT_ENABLE

#define    EXTERNAL_INT0_TRIGGER   INT0_TRIGGER_RISING_EDGE

#define    EXTERNAL_INT1_TRIGGER   INT1_TRIGGER_RISING_EDGE

#define    EXTERNAL_INT2_TRIGGER   INT2_TRIGGER_RISING_EDGE

#endif /* EXT_CFG_H_ */