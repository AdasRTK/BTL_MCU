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
			printf("Auto mode\r\n");
			count=0;
			printf("RED-GREEN: %d\r\n",GREEN+counter_green-count);
			setTimer2(100);
		}
		break;

	case AUTO_RED_GREEN:
		if(timer1_flag == 1) {
			led_status = AUTO_RED_YELLOW;
			setTimer1((YELLOW+counter_yellow)*100);
			count=0;
			printf("RED-YELLOW: %d\r\n",YELLOW+counter_yellow-count);
			setTimer2(100);
		}
		if(timer2_flag == 1){
			count++;
			printf("RED-GREEN: %d\r\n",GREEN+counter_green-count);
			setTimer2(100);
		}
		if(isButton2Pressed()== 1) {
			led_status= MANUAL_RED_GREEN;
			printf("Button 2 Pressed: Manual mode\r\n");
		}
		if(isButton3Pressed()== 1) {
			led_status= TUNING_RED;
			printf("Button 3 Pressed: Tuning mode\r\n");
			printf("Press button 1 to increase time length\r\n");
			printf("Press button 2 to set\r\n");
			printf("Tuning red\r\n");

		}
		if(isButton4Pressed()== 1) {
			led_status= INIT1;
			printf("Button 4 Pressed: Pedestrian mode\r\n");
			setTimer1(200);
	    }
		break;

	case AUTO_RED_YELLOW:
		if(timer1_flag == 1) {
			led_status = AUTO_GREEN_RED;
			setTimer1((GREEN+counter_green)*100);
			count=0;
			printf("GREEN-RED: %d\r\n",GREEN+counter_green-count);
			setTimer2(100);
		}
		if(timer2_flag == 1){
			count++;
			printf("RED-YELLOW: %d\r\n",YELLOW+counter_yellow-count);
			setTimer2(100);
		}
		if(isButton2Pressed() == 1) {
			led_status= MANUAL_RED_GREEN;
			printf("Button 2 Pressed: Manual mode\r\n");
	    }
		if(isButton3Pressed()== 1) {
			led_status= TUNING_RED;
			printf("Button 3 Pressed: Tuning mode\r\n");
			printf("Press button 1 to increase time length\r\n");
			printf("Press button 2 to set\r\n");
			printf("Tuning red\r\n");
		}
		if(isButton4Pressed()== 1) {
			led_status= INIT1;
			printf("Button 4 Pressed: Pedestrian mode\r\n");
			setTimer1(200);
	    }
		break;

	case AUTO_GREEN_RED:
		if(timer1_flag == 1) {
			led_status = AUTO_YELLOW_RED;
			setTimer1((YELLOW+counter_yellow)*100);
			count=0;
			printf("YELLOW-RED: %d\r\n",YELLOW+counter_yellow-count);
			setTimer2(100);
		}
		if(timer2_flag == 1){
			count++;
			printf("GREEN-RED: %d\r\n",GREEN+counter_green-count);
			setTimer2(100);
		}
		if(isButton2Pressed()== 1) {
			led_status= MANUAL_RED_GREEN;
			printf("Button 2 Pressed: Manual mode\r\n");
	    }
		if(isButton3Pressed()== 1) {
			led_status= TUNING_RED;
			printf("Button 3 Pressed: Tuning mode\r\n");
			printf("Press button 1 to increase time length\r\n");
			printf("Press button 2 to set\r\n");
			printf("Tuning red\r\n");
		}
		if(isButton4Pressed()== 1) {
			led_status= INIT1;
			printf("Button 4 Pressed: Pedestrian mode\r\n");
			setTimer1(200);
	    }
		break;

	case AUTO_YELLOW_RED:
		if(timer1_flag == 1) {
			led_status = AUTO_RED_GREEN;
			setTimer1((GREEN+counter_green)*100);
			count=0;
			printf("RED-GREEN: %d\r\n",GREEN+counter_green-count);
			setTimer2(100);
		}
		if(timer2_flag == 1){
			count++;
			printf("YELLOW-RED: %d\r\n",YELLOW+counter_yellow-count);
			setTimer2(100);
		}
		if(isButton2Pressed()== 1) {
			led_status= MANUAL_RED_GREEN;
			printf("Button 2 Pressed: Manual mode\r\n");
	    }
		if(isButton3Pressed()== 1) {
			led_status= TUNING_RED;
			printf("Button 3 Pressed: Tuning mode\r\n");
			printf("Press button 1 to increase time length\r\n");
			printf("Press button 2 to set\r\n");
			printf("Tuning red\r\n");
		}
		if(isButton4Pressed()== 1) {
			led_status= INIT1;
			printf("Button 4 Pressed: Pedestrian mode\r\n");
			setTimer1(200);
	    }
		break;

	default:
		break;
	}
}

