/* 
 * File:   ecu_relay.h
 * Author: Salah Bendary
 *
 * Created on 04 August 2023, 17:08
 */

#ifndef ECU_RELAY_H
#define	ECU_RELAY_H

/* ----------------- Includes -----------------*/
#include "ecu_relay_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* ----------------- Macro Declarations -----------------*/

/* ----------------- Macro Functions Declarations -----------------*/

/* ----------------- Data Type Declarations -----------------*/
typedef enum {
    REALY_OFF_STATUS = 0,
    REALY_ON_STATUS
}Relay_Status_t;

typedef struct{
    uint8 relay_port : 4;
    uint8 relay_pin : 3;
    uint8 relay_status : 1;
}relay_t;

/* ----------------- Software Interfaces Declarations -----------------*/
Std_ReturnType relay_initialize(const relay_t *_relay);
Std_ReturnType relay_turn_on(const relay_t *_relay);
Std_ReturnType relay_turn_off(const relay_t *_relay);
#endif	/* ECU_RELAY_H */



