/*
 * global.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#include "software_timer.h"

int timer_counter[10] = {0};
int timer_flag[10] = {0};

void setTimer(int duration, int timerId){
	timer_counter[timerId] = duration;
	timer_flag[timerId] = 0;
}
void timerRun(int timerId){
	if(timer_counter[timerId] > 0){
		timer_counter[timerId]--;
		if(timer_counter[timerId] <= 0){
			timer_flag[timerId] = 1;
		}
	}
}
