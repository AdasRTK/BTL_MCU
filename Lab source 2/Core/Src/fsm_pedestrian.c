/*
 * fsm_pedestrian.c
 *
 *  Created on: Dec 8, 2023
 *      Author: PC
 */
#include "global.h"

void fsm_pedestrian(){
	switch(led_status){
	case BUZZER:
		if(timer1_flag==1){
			led_status=GO;
			setTimer1(500);
		}
		break;
	case GO:
		if(timer1_flag==1){
			led_status=INIT;
			setTimer1(1);
		}
		break;
	default:
		break;
	}
}
