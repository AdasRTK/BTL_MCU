/*
 * fsm_automatic.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#include "fsm_automatic.h"

int red_duration = 5;
int green_duration = 4;
int yellow_duration = 3;
int index_led = 0;

void setHorizontalLeds(int red, int green){
	HAL_GPIO_WritePin(LED_RED_H_GPIO_Port, LED_RED_H_Pin, red);
	HAL_GPIO_WritePin(LED_GREEN_H_GPIO_Port, LED_GREEN_H_Pin, green);
}
void setVerticalLeds(int red, int green){
	HAL_GPIO_WritePin(LED_RED_V_GPIO_Port, LED_RED_V_Pin, red);
	HAL_GPIO_WritePin(LED_GREEN_V_GPIO_Port, LED_GREEN_V_Pin, green);
}

void fsm_automatic_run(){
	switch(status) {
		case INIT:
			status = RED_GREEN;
			setInitialValue(red_duration, green_duration);
			setTimer(green_duration*100, 0);
			setTimer(100, 1);
			break;
		case RED_GREEN:
			setHorizontalLeds(RESET,SET);
			setVerticalLeds(SET,RESET);

			if(timer_flag[0] == 1){
				setInitialValue(yellow_duration, yellow_duration);
				setTimer(yellow_duration*100, 0);
				status = RED_YELLOW;
			}
			if(timer_flag[1] == 1){
				countDown();
				setTimer(100, 1);
			}
			break;
		case RED_YELLOW:
			setHorizontalLeds(RESET,SET);
			setVerticalLeds(RESET,RESET);
			if(timer_flag[0] == 1){
				setInitialValue(green_duration, red_duration);
				setTimer(green_duration*100, 0);
				status = GREEN_RED;
			}
			if(timer_flag[1] == 1){
				setTimer(100, 1);
			}
			break;
		case GREEN_RED:
			setHorizontalLeds(SET,RESET);
			setVerticalLeds(RESET,SET);
			if(timer_flag[0] == 1){
				setInitialValue(yellow_duration, yellow_duration);
				setTimer(yellow_duration*100, 0);
				status = GREEN_YELLOW;
			}
			if(timer_flag[1] == 1){
				countDown();
				setTimer(100, 1);
			}
			break;
		case GREEN_YELLOW:
			setHorizontalLeds(SET,RESET);
			setVerticalLeds(RESET,RESET);
			if(timer_flag[0] == 1){
				setInitialValue(red_duration, green_duration);
				setTimer(green_duration*100, 0);
				status = RED_GREEN;
			}
			if(timer_flag[1] == 1){
				countDown();
				setTimer(100, 1);
			}
			break;
		default:
			break;
	}

	if(timer_flag[2] == 1){
		updateClockBuffer();
		if(index_led >= 4) index_led = 0;
		setTimer(10, 2);
	}
	if(status == RED_GREEN && isButtonPressed(1) == 1){
		setHorizontalLeds(SET,SET);
		setVerticalLeds(SET,SET);
		status = MAN_RED;
	}
};

