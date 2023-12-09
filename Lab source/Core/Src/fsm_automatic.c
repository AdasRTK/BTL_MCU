/*
 * fsm_mode.c
 *
 *  Created on: Oct 22, 2023
 *      Author: PC
 */

#include "global.h"

void fsm_automatic_run() {
	switch(led_status){
	case INIT:
		if(timer1_flag==1){
			led_status = AUTO_RED_GREEN;
			setTimer1((GREEN+counter_green)*100);
		}
		break;

	case AUTO_RED_GREEN:
		if(timer1_flag == 1) {
			led_status = AUTO_RED_YELLOW;
			setTimer1((YELLOW+counter_yellow)*100);
		}
		if(isButton2Pressed()== 1) {
			led_status= MANUAL_RED;
			setTimer1(50);
		}
		if(isButton4Pressed()== 1) {
			led_status= BUZZER;
			setTimer1(200);
	    }
		break;

	case AUTO_RED_YELLOW:

		if(timer1_flag == 1) {
			led_status = AUTO_GREEN_RED;
			setTimer1((GREEN+counter_green)*100);
		}
		if(isButton2Pressed() == 1) {
			led_status= MANUAL_RED;
			setTimer1(50);
	    }
		if(isButton4Pressed()== 1) {
			led_status= BUZZER;
			setTimer1(200);
	    }
		break;

	case AUTO_GREEN_RED:

		if(timer1_flag == 1) {
			led_status = AUTO_YELLOW_RED;
			setTimer1((YELLOW+counter_yellow)*100);
		}
		if(isButton2Pressed()== 1) {
			led_status= MANUAL_RED;
			setTimer1(50);
	    }
		if(isButton4Pressed()== 1) {
			led_status= BUZZER;
			setTimer1(200);
	    }
		break;

	case AUTO_YELLOW_RED:
		if(timer1_flag == 1) {
			led_status = AUTO_RED_GREEN;
			setTimer1((GREEN+counter_green)*100);
		}
		if(isButton2Pressed()== 1) {
			led_status= MANUAL_RED;
			setTimer1(50);
	    }
		if(isButton4Pressed()== 1) {
			led_status= BUZZER;
			setTimer1(200);
	    }
		break;

	default:
		break;
	}
}

