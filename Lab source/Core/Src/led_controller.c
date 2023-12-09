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
	case BUZZER:
		red1_on();
		red2_on();
		green1_on();
		green2_on();
		ped1_on();
		break;
	case GO:
		red1_on();
		red2_on();
		green1_off();
		green2_off();
		ped1_off();
		ped2_on();
		break;
	default:
		break;
	}
}




int update_status(int led_status){
	if(led_status==4){
		led_status=1;
		return led_status;
	}
	led_status++;
	return led_status;
}



void clear_all_led(){
	red1_off();
	red2_off();
	green1_off();
	green2_off();
	ped1_off();
	ped2_off();
}


void set_manual(int led_status){
	switch(led_status){
	case MANUAL_RED:
		red1_on();
		red2_on();
		break;
	case MANUAL_YELLOW:
		red1_on();
		green1_on();
		red2_on();
		green2_on();
		break;
	case MANUAL_GREEN:
		green1_on();
		green2_on();
		break;
	}
}



void update_led_status(){
	if(led_status_1==0){
		led_status_1=1;
	}
	else{
		if((GREEN+counter_green-ontime)==1 && led_status_1==1){
			led_status_1=2;
			ontime=0;
		}
		else if((YELLOW+counter_yellow-ontime)==1 && led_status_1==2){
			led_status_1=3;
			ontime=0;
		}
		else if((GREEN+counter_green-ontime)==1 && led_status_1==3){
			led_status_1=4;
			ontime=0;
		}
		else if((YELLOW+counter_yellow-ontime)==1 && led_status_1==4){
			led_status_1=1;
			ontime=0;
		}
		else ontime++;
	}
}

void red1_on(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
}
void red2_on(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
}
void green1_on(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
}
void green2_on(){
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
}
void ped1_on(){
	HAL_GPIO_WritePin(PEDES1_GPIO_Port, PEDES1_Pin, RESET);
}
void ped2_on(){
	HAL_GPIO_WritePin(PEDES2_GPIO_Port, PEDES2_Pin, RESET);
}

void red1_off(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
}
void red2_off(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
}
void green1_off(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
}
void green2_off(){
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
}
void ped1_off(){
	HAL_GPIO_WritePin(PEDES1_GPIO_Port, PEDES1_Pin,SET);
}
void ped2_off(){
	HAL_GPIO_WritePin(PEDES2_GPIO_Port, PEDES2_Pin, SET);
}

