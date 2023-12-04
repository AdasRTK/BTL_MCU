/*
 * fsm_auto.c
 *
 *  Created on: Nov 24, 2023
 *      Author: Minh Hieu
 */


#include "fsm_auto.h"

int status = INIT;
int red_time = 5;
int yellow_time = 2;
int green_time = 3;
int red_time_show = 0 ; // temp variable for red time length
int yellow_time_show = 0 ;
int green_time_show = 0 ;


void fsm_auto(){
	switch (status){
	case INIT:
		red_time_show = red_time - 1; // time length = 5s, start at 4 and end at 0
		green_time_show = green_time - 1;
		status = AUTO_RED_GREEN;
		break;
	case AUTO_RED_GREEN:
		red_time_show --;
		green_time_show --;
		if (green_time_show < 0){
			status = AUTO_RED_YELLOW;
			yellow_time_show = yellow_time - 1;
		}
		break;
	case AUTO_RED_YELLOW:
		red_time_show --;
		yellow_time_show --;
		if (yellow_time_show < 0){
			status = AUTO_GREEN_RED;
			red_time_show = red_time - 1;
			green_time_show = green_time - 1;
		}
		break;
	case AUTO_GREEN_RED:
		red_time_show --;
		green_time_show --;
		if (green_time_show < 0){
			status = AUTO_YELLOW_RED;
			yellow_time_show = yellow_time - 1;
		}
		break;
	case AUTO_YELLOW_RED:
		red_time_show --;
		yellow_time_show --;
		if (yellow_time_show < 0){
			status = AUTO_RED_GREEN;
			red_time_show  = red_time - 1;
			green_time_show = green_time - 1;
		}
		break;
	default: break;
	}
}
