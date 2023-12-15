/*
 * fsm_tuning.c
 *
 *  Created on: Dec 10, 2023
 *      Author: PC
 */

#include"global.h"

void fsm_tuning_run(){
	switch(led_status){
	case TUNING_RED:
		if(isButton1Pressed()==1){
			printf("Value Increased\r\n");
			if(counter_red+temp+RED<99){
				temp++;
			}
		}
		if(isButton2Pressed()==1){
			printf("Value Set\r\n");
			counter_red+=temp;
			temp=0;
			counter_green=RED+counter_red-GREEN-YELLOW-counter_yellow;
		}
		if(isButton3Pressed()==1){
			led_status=TUNING_YELLOW;
			printf("Tuning yellow\r\n");
			temp=0;
		}
		break;
	case TUNING_YELLOW:
		if(isButton1Pressed()==1){
			printf("Value Increased\r\n");
			if(counter_yellow+temp+YELLOW<99){
				temp++;
			}
		}
		if(isButton2Pressed()==1){
			printf("Value Set\r\n");
			counter_yellow+=temp;
			counter_red=YELLOW+GREEN+counter_yellow+counter_green-RED;
			temp=0;
		}
		if(isButton3Pressed()==1){
			led_status=TUNING_GREEN;
			printf("Tuning green\r\n");
			temp=0;
		}
		break;
	case TUNING_GREEN:
		if(isButton1Pressed()==1){
			printf("Value Increased\r\n");
			if(counter_green+temp+GREEN<99){
				temp++;
			}
		}
		if(isButton2Pressed()==1){
			printf("Value Set\r\n");
			counter_green+=temp;
			counter_red=YELLOW+GREEN+counter_yellow+counter_green-RED;
			temp=0;
		}
		if(isButton3Pressed()==1){
			led_status=INIT;
			temp=0;
		}
		break;
	default:
		break;
	}
}
