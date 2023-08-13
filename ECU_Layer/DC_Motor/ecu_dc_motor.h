/* 
 * File:   ecu_dc_motor.h
 * Author: Salah Bendary
 *
 * Created on 04 August 2023, 17:30
 */

#ifndef ECU_DC_MOTOR_H
#define	ECU_DC_MOTOR_H


/* ----------------- Includes -----------------*/
#include "ecu_dc_motor_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* ----------------- Macro Declarations -----------------*/



/* ----------------- Macro Functions Declarations -----------------*/

/* ----------------- Data Type Declarations -----------------*/
typedef enum {
   DC_MOTOR_OFF_STATUS =0,
   DC_MOTOR_ON_STATUS
}DC_Motor_status_t;

typedef enum {
   DC_MOTOR_PIN1 =0,
   DC_MOTOR_PIN2
}DC_Motor_pin_t;

typedef struct {
    pin_config_t dc_motor_pin[2];
}dc_motor_t;

/* ----------------- Software Interfaces Declarations -----------------*/
Std_ReturnType dc_motor_initialize(const dc_motor_t *_dc_motor);
Std_ReturnType dc_motor_move_right(const dc_motor_t *_dc_motor);
Std_ReturnType dc_motor_move_left(const dc_motor_t *_dc_motor);
Std_ReturnType dc_motor_stop(const dc_motor_t *_dc_motor);

#endif	/* ECU_DC_MOTOR_H */

