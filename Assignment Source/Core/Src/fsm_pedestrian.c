/*
 * fsm_pedestrian.c
 *
 *  Created on: Dec 8, 2023
 *      Author: PC
 */
#include "global.h"


void fsm_pedestrian(){
	switch(led_status){
	case INIT1:
		if(timer1_flag==1){
			led_status = PEDES_RED_GREEN;
			setTimer1((GREEN+counter_green)*100);
			printf("PEDES mode\r\n");
			count=0;
			printf("RED-GREEN: %d\r\n",GREEN+counter_green-count);
			setTimer3(100);
		}
		break;

	case PEDES_RED_GREEN:
		if(timer1_flag == 1) {
			led_status = PEDES_RED_YELLOW;
			setTimer1((YELLOW+counter_yellow)*100);

			HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_1);
			setTimer2(60);
			count=0;
			printf("RED-YELLOW: %d\r\n",YELLOW+counter_yellow-count);
			printf("TIME TO GO: %d\r\n",YELLOW+counter_yellow-count);
			setTimer3(100);
			setTimer4(61);
		}
		if(timer3_flag == 1){
			count++;
			printf("RED-GREEN: %d\r\n",GREEN+counter_green-count);
			setTimer3(100);
		}
		break;

	case PEDES_RED_YELLOW:
		if(timer1_flag == 1) {
			led_status = PEDES_GREEN_RED;
			setTimer1((GREEN+counter_green)*100);
			count=0;
			buzzer_off();
			printf("GREEN-RED: %d\r\n",GREEN+counter_green-count);
			setTimer3(100);
		}
		if(timer2_flag==1){
			buzzer_input+=70;
			setTimer2(60);
		}
		if(timer3_flag == 1){
			count++;
			printf("RED-YELLOW: %d\r\n",YELLOW+counter_yellow-count);
			printf("TIME TO GO: %d\r\n",YELLOW+counter_yellow-count);
			setTimer3(100);
		}
		if(timer4_flag==1){
			buzzeroff();
			setTimer4(60);
		}
		break;

	case PEDES_GREEN_RED:
		if(timer1_flag == 1) {
			led_status = PEDES_YELLOW_RED;
			setTimer1((YELLOW+counter_yellow)*100);

			HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_1);
			setTimer2(60);
			count=0;
			printf("YELLOW-RED: %d\r\n",YELLOW+counter_yellow-count);
			printf("TIME TO GO: %d\r\n",YELLOW+counter_yellow-count);
			setTimer3(100);
			setTimer4(61);
		}
		if(timer3_flag == 1){
			count++;
			printf("GREEN-RED: %d\r\n",GREEN+counter_green-count);
			setTimer3(100);
		}
		break;

	case PEDES_YELLOW_RED:
		if(timer1_flag == 1) {
			setTimer1(1);
			led_status = INIT;
		}
		if(timer2_flag==1){
			buzzer_input+=70;
			setTimer2(60);
		}
		if(timer3_flag == 1){
			count++;
			printf("YELLOW-RED: %d\r\n",YELLOW+counter_yellow-count);
			printf("TIME TO GO: %d\r\n",YELLOW+counter_yellow-count);
			setTimer3(100);
		}
		if(timer4_flag==1){
			buzzeroff();
			setTimer4(60);
		}
		break;
	default:
		break;
	}
}
