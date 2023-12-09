/*
 * led_controller.h
 *
 *  Created on: Nov 1, 2023
 *      Author: PC
 */

#ifndef INC_LED_CONTROLLER_H_
#define INC_LED_CONTROLLER_H_

int update_status(int led_status);
void update_led_status();
void traffic_light(int led_status);
void led_blinky(int led_status);
void clear_all_led();
void set_manual(int led_status);


void red1_on();
void red2_on();
void green1_on();
void green2_on();
void ped1_on();
void ped2_on();

void red1_off();
void red2_off();
void green1_off();
void green2_off();
void ped1_off();
void ped2_off();
#endif /* INC_LED_CONTROLLER_H_ */
