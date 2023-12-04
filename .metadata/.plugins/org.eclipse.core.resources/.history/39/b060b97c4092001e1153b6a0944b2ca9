/*
 * fsm_manual.c
 *
 *  Created on: Nov 24, 2023
 *      Author: Minh Hieu
 */
#include "fsm_manual.h"


int red_time_tmp, yellow_time_tmp, green_time_tmp;

void turnbackINIT(){
	if (red_time < 1 || yellow_time < 1 ||
			green_time < 1){
		red_time = 5;
		yellow_time = 2;
		green_time = 3;
	}
	red_time = green_time + yellow_time;
	status = INIT;
}
void checkButton1(){
	if (isButtonPressed(0) == 1){
		//reset set timer
		if (status == MANUAL_RED) {
			status = MANUAL_YELLOW;
		}
		else if (status == MANUAL_YELLOW) {
			status = MANUAL_GREEN;
		}
		else if (status == MANUAL_GREEN) {
			turnbackINIT();
		}
		else {
			status = MANUAL_INIT;
		}
	}
}

void checkButton2(){
	if (isButtonPressed(1) == 1){
		if (status == MANUAL_RED){
			if (red_time_tmp < 99) {
				red_time_tmp++;
			}
		}
		if (status == MANUAL_YELLOW){
			if (yellow_time_tmp < 99){
				yellow_time_tmp++;
			}
		}
		if (status == MANUAL_GREEN){
			if (green_time_tmp < 99) {
				green_time_tmp++;
			}
		}
	}
}
void checkButton3(){
	if (isButtonPressed(2) == 1){
		if (status == MANUAL_RED){
			red_time = red_time_tmp;
		}
		else if (status == MANUAL_YELLOW){
			yellow_time = yellow_time_tmp;
		}
		else if (status == MANUAL_GREEN){
			green_time = green_time_tmp;
		}
		//when confirm the time, flag =0 to reset timer again
	}
}


void fsm_manual(){
	checkButton1();
	switch (status){
	case MANUAL_INIT:
		red_time_tmp = 0;
		yellow_time_tmp= 0;
		green_time_tmp = 0;
		status = MANUAL_RED; //auto state -> manual state
	case MANUAL_RED:
		checkButton2();
		checkButton3();
		break;
	case MANUAL_YELLOW:
		checkButton2();
		checkButton3();
		break;
	case MANUAL_GREEN:
		checkButton2();
		checkButton3();
		break;
	default: break;
	}




}
