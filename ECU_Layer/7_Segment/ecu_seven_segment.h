/* 
 * File:   ecu_seven_segment.h
 * Author: Salah Bendary
 *
 * Created on 04 August 2023, 17:42
 */

#ifndef ECU_SEVEN_SEGMENT_H
#define	ECU_SEVEN_SEGMENT_H

/* Section : Includes */
#include "ecu_seven_segment_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"
/* Section: Macro Declarations */
/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */
typedef enum{
    SEGEMENT_PIN0 = 0,
    SEGEMENT_PIN1,
    SEGEMENT_PIN2,
    SEGEMENT_PIN3
}segment_pin_t;

typedef enum{
    SEGMENT_COMMON_ANODE,
    SEGMENT_COMMON_CATHODE
}segment_type_t;

typedef struct{
    pin_config_t segment_pins[4];
    segment_type_t segment_type;
}segment_t;

/* Section: Function Declarations */
Std_ReturnType seven_segement_intialize(const segment_t *seg);
Std_ReturnType seven_segement_write_number(const segment_t *seg, uint8 number);
#endif	/* ECU_SEVEN_SEGMENT_H */

