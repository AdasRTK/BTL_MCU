/*
 * led_controller.c
 *
 *  Created on: Nov 1, 2023
 *      Author: PC
 */
#include"global.h"


//red and green on equal to yellow on
void traffic_light(int led_status){
	switch(led_status){
	case INIT:
		clear_all_led();
		buzzer_off();
		break;
	case AUTO_RED_GREEN:
		red1_on();
		green2_on();
		green1_off();
		red2_off();
		break;
	case AUTO_RED_YELLOW:
		red1_on();
		red2_on();
		break;
	case AUTO_GREEN_RED:
		green1_on();
		red2_on();
		red1_off();
		green2_off();
		break;
	case AUTO_YELLOW_RED:
		red1_on();
		green1_on();
		red2_on();
		break;
	case INIT1:
		clear_all_led();
		break;
	case PEDES_RED_GREEN:
		red1_on();
		green2_on();
		green1_off();
		red2_off();
		break;
	case PEDES_RED_YELLOW:
		red1_on();
		red2_on();
		buzzer_on();
		break;
	case PEDES_GREEN_RED:
		green1_on();
		red2_on();
		red1_off();
		green2_off();
		break;
	case PEDES_YELLOW_RED:
		red1_on();
		green1_on();
		red2_on();
		buzzer_on();
		break;
	default:
		break;
	}
}





void clear_all_led(){
	count=0;
	red1_off();
	red2_off();
	green1_off();
	green2_off();
	ped1_off();
	ped2_off();
}


void set_manual(int led_status){
	switch(led_status){
	case MANUAL_RED_GREEN:
		red1_on();
		green2_on();
		break;
	case MANUAL_RED_YELLOW:
		red1_on();
		red2_on();
		green2_on();
		break;
	case MANUAL_GREEN_RED:
		green1_on();
		red2_on();
		break;
	case MANUAL_YELLOW_RED:
		red1_on();
		green1_on();
		red2_on();
		break;
	default:
		break;
	}
}

void set_tuning(int led_status){
	switch(led_status){
	case TUNING_RED:
		red1_on();
		red2_on();
		break;
	case TUNING_YELLOW:
		red1_on();
		green1_on();
		red2_on();
		green2_on();
		break;
	case TUNING_GREEN:
		green1_on();
		green2_on();
		break;
	default:
		break;
	}
}


void red1_on(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
}
void red2_on(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
}
void green1_on(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
}
void green2_on(){
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
}
void ped1_on(){
	HAL_GPIO_WritePin(PEDES1_GPIO_Port, PEDES1_Pin, SET);
}
void ped2_on(){
	HAL_GPIO_WritePin(PEDES2_GPIO_Port, PEDES2_Pin, SET);
}
void buzzer_on(){
	__HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,buzzer_input);
}
void buzzeroff(){
	__HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,0);
}

void red1_off(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
}
void red2_off(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
}
void green1_off(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
}
void green2_off(){
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
}
void ped1_off(){
	HAL_GPIO_WritePin(PEDES1_GPIO_Port, PEDES1_Pin,RESET);
}
void ped2_off(){
	HAL_GPIO_WritePin(PEDES2_GPIO_Port, PEDES2_Pin, RESET);
}
void buzzer_off(){
	buzzer_input=0;
	HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_1);
}



