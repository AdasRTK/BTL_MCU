/*
 * fsm_manual.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#include "fsm_manual.h"

int red_duration_clone;
int yellow_duration_clone;
int green_duration_clone;
void initializeDurationClones(){
    red_duration_clone = red_duration;
    yellow_duration_clone = yellow_duration;
    green_duration_clone = green_duration;
}
void fsm_manual_run(){
	switch (status) {
		case MAN_RED:
			setInitialValue(red_duration_clone,red_duration_clone);
			if(timer_flag[3] == 1){
				HAL_GPIO_TogglePin(LED_RED_H_GPIO_Port, LED_RED_H_Pin);
				HAL_GPIO_TogglePin(LED_RED_V_GPIO_Port, LED_RED_V_Pin);
				setTimer(100, 3);
			}
			if(isButtonPressed(1) == 1){
				setHorizontalLeds(SET, SET);
				setVerticalLeds(SET, SET);
				setTimer(100, 3);
				status = MAN_YELLOW;
			}
			if(isButtonPressed(2) == 1){
				red_duration_clone++;
				if(red_duration_clone >= 99) red_duration_clone = red_duration;
			}
			if(isButtonPressed(3) == 1){
				red_duration =  red_duration_clone;
				green_duration = red_duration - yellow_duration;
				status = INIT;
			}
			break;
		case MAN_YELLOW:
			setInitialValue(yellow_duration_clone,yellow_duration_clone);
			if(timer_flag[3] == 1){
				HAL_GPIO_TogglePin(LED_RED_H_GPIO_Port, LED_RED_H_Pin);
				HAL_GPIO_TogglePin(LED_GREEN_V_GPIO_Port, LED_GREEN_V_Pin);
				setTimer(100, 3);
			}
			if(isButtonPressed(1) == 1){
				setHorizontalLeds(SET,SET);
				setVerticalLeds(SET,SET);
				setTimer(100, 3);
				status = MAN_GREEN;
			}
			if(isButtonPressed(2) == 1){
				yellow_duration_clone++;
				if(yellow_duration_clone >= 99) yellow_duration_clone = yellow_duration;
			}
			if(isButtonPressed(3) == 1){
				yellow_duration =  yellow_duration_clone;
				red_duration = green_duration + yellow_duration;
				status = INIT;
			}
			break;
		case MAN_GREEN:
			setInitialValue(green_duration_clone,green_duration_clone);
			if(timer_flag[3] == 1){
				HAL_GPIO_TogglePin(LED_GREEN_H_GPIO_Port, LED_GREEN_H_Pin);
				HAL_GPIO_TogglePin(LED_GREEN_V_GPIO_Port, LED_GREEN_V_Pin);
				setTimer(100, 3);
			}
			if(isButtonPressed(1) == 1){
				setHorizontalLeds(SET,SET);
				setVerticalLeds(SET,SET);
				status = INIT;
			}
			if(isButtonPressed(2) == 1){
				green_duration_clone++;
				if(green_duration_clone >= 99) green_duration_clone = green_duration;
			}
			if(isButtonPressed(3) == 1){
				green_duration =  green_duration_clone;
				red_duration = green_duration + yellow_duration;
				status = INIT;
			}
			break;
		default:
			initializeDurationClones();
			break;
	}
}