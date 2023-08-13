/* 
 * File:   ecu_dc_motor.h
 * Author: Salah Bendary
 *
 * Created on 04 August 2023, 17:30
 */

/* ----------------- Includes -----------------*/
#include "ecu_dc_motor.h"


Std_ReturnType dc_motor_initialize(const dc_motor_t *_dc_motor){
    Std_ReturnType ret = E_OK;
    if(NULL == _dc_motor) {
        ret = E_NOT_OK;
    }
    else {
        ret = gpio_pin_intialize(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN1]));
        ret = gpio_pin_intialize(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN2]));
    }
    return ret;
}
Std_ReturnType dc_motor_move_right(const dc_motor_t *_dc_motor){
        Std_ReturnType ret = E_OK;
    if(NULL == _dc_motor) {
        ret = E_NOT_OK;
    }
    else {
        ret = gpio_pin_write_logic(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN1]),GPIO_HIGH);
        ret = gpio_pin_write_logic(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN2]),GPIO_LOW);
    }
    return ret;
}
Std_ReturnType dc_motor_move_left(const dc_motor_t *_dc_motor){
        Std_ReturnType ret = E_OK;
    if(NULL == _dc_motor) {
        ret = E_NOT_OK;
    }
    else {
        ret = gpio_pin_write_logic(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN1]),GPIO_LOW);
        ret = gpio_pin_write_logic(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN2]),GPIO_HIGH);
    }
    return ret;
}
Std_ReturnType dc_motor_stop(const dc_motor_t *_dc_motor){
        Std_ReturnType ret = E_OK;
    if(NULL == _dc_motor) {
        ret = E_NOT_OK;
    }
    else {
        ret = gpio_pin_write_logic(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN1]),GPIO_LOW);
        ret = gpio_pin_write_logic(&(_dc_motor->dc_motor_pin[DC_MOTOR_PIN2]),GPIO_LOW);
    }
    return ret;
}