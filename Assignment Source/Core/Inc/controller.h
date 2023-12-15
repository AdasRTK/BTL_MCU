/*
 * led_controller.h
 *
 *  Created on: Nov 1, 2023
 *      Author: PC
 */

#ifndef INC_LED_CONTROLLER_H_
#define INC_LED_CONTROLLER_H_

void traffic_light(int led_status);
void clear_all_led();
void set_manual(int led_status);
void set_tuning(int led_status);

void red1_on();
void red2_on();
void green1_on();
void green2_on();
void ped1_on();
void ped2_on();
void buzzer_on();

void red1_off();
void red2_off();
void green1_off();
void green2_off();
void ped1_off();
void ped2_off();
void buzzer_off();
void buzzeroff();
#endif /* INC_LED_CONTROLLER_H_ */
