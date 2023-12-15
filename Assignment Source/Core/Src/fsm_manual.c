/*
 * fsm_manual.c
 *
 *  Created on: Oct 23, 2023
 *      Author: PC
 */

#include "global.h"

void fsm_manual_run(){
	switch(led_status){
	case MANUAL_RED_GREEN:
		if(isButton1Pressed()==1){
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			led_status=MANUAL_RED_YELLOW;
		}
		break;
	case MANUAL_RED_YELLOW:
		if(isButton1Pressed()==1){
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			led_status=MANUAL_GREEN_RED;
		}
		break;
	case MANUAL_GREEN_RED:
		if(isButton1Pressed()==1){
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			led_status=MANUAL_YELLOW_RED;
		}
		break;
	case MANUAL_YELLOW_RED:
		if(isButton1Pressed()==1){
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			led_status=MANUAL_RED_GREEN;
		}
		break;
	default:
		break;
	}
}
