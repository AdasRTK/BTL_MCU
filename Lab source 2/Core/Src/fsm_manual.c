/*
 * fsm_manual.c
 *
 *  Created on: Oct 23, 2023
 *      Author: PC
 */

#include "global.h"

void fsm_manual_run(){
	switch(led_status){
	case MANUAL_RED:
		if(isButton1Pressed()==1){
			temp=0;
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			counter_red+=temp;
			temp=0;
			counter_green=RED+counter_red-GREEN-YELLOW-counter_yellow;
			led_status=MANUAL_YELLOW;
		}
		if(isButton3Pressed()==1){
			if(counter_red+temp+RED<99){
				temp++;
			}
		}
		break;
	case MANUAL_YELLOW:
		if(isButton1Pressed()==1){
			temp=0;
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			counter_yellow+=temp;
			counter_red=YELLOW+GREEN+counter_yellow+counter_green-RED;
			temp=0;
			led_status=MANUAL_GREEN;
		}
		if(isButton3Pressed()==1){
			if(counter_yellow+temp+YELLOW<99){
				temp++;
			}
		}
		break;
	case MANUAL_GREEN:
		if(isButton1Pressed()==1){
			temp=0;
			led_status=INIT;
		}
		if(isButton2Pressed()==1){
			counter_green+=temp;
			counter_red=YELLOW+GREEN+counter_yellow+counter_green-RED;
			temp=0;
			led_status=MANUAL_RED;
		}
		if(isButton3Pressed()==1){
			if(counter_green+temp+GREEN<99){
				temp++;
			}
		}
		break;
	default:
		break;
	}
}
