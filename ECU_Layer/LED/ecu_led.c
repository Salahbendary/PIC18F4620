/* 
 * File:   ecu_led.c
 * Author: Salah Bendary
 *
 * Created on 24 July 2023, 18:25
 */

#include "ecu_led.h"


/* Section : Includes */
#include "ecu_led.h"

/* Section : Macro Functions Declarations */


/* Section : Data Type Declaration */


/* Section : Macro Declaration */


/* Section : Function Declaration */

/**
 * 
 * @param led
 * @return 
 */
Std_ReturnType led_initialize(const led_t *led){
    Std_ReturnType ret = E_OK;
    if ( NULL == led) 
    {
        ret = E_NOT_OK;
    }
    else {
        pin_config_t pin_obj = { .port = led->port_name , .pin = led ->pin, 
                                 .direction = GPIO_DIRECTION_OUTPUT, .logic = led->led_status};
        ret = gpio_pin_intialize(&pin_obj);
    }
    return ret;
}
Std_ReturnType led_turn_on(const led_t *led){
    Std_ReturnType ret = E_OK;
    if ( NULL == led) 
    {
        ret = E_NOT_OK;
    }
    else {
        pin_config_t pin_obj = { .port = led->port_name , .pin = led ->pin, 
                                 .direction = GPIO_DIRECTION_OUTPUT, .logic = led->led_status};
        ret = gpio_pin_write_logic(&pin_obj,GPIO_HIGH);
    }
    return ret;
}
Std_ReturnType led_turn_off(const led_t *led){
    Std_ReturnType ret = E_OK;
    if ( NULL == led) 
    {
        ret = E_NOT_OK;
    }
    else {
        pin_config_t pin_obj = { .port = led->port_name , .pin = led ->pin, 
                                 .direction = GPIO_DIRECTION_OUTPUT, .logic = led->led_status};
        ret = gpio_pin_write_logic(&pin_obj,GPIO_LOW);
    }
    return ret;
}
Std_ReturnType led_turn_toggle(const led_t *led){
    Std_ReturnType ret = E_OK;
    if ( NULL == led) 
    {
        ret = E_NOT_OK;
    }
    else {
        pin_config_t pin_obj = { .port = led->port_name , .pin = led ->pin, 
                                 .direction = GPIO_DIRECTION_OUTPUT, .logic = led->led_status};
        ret = gpio_pin_toggle_logic(&pin_obj);
    }
    return ret;
}
