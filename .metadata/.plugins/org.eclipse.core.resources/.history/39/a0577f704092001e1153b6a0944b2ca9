/*
 * software_timer.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Minh Hieu
 */

//used timer: Hieu:0, 1 , 2,3
//Tanh:4
#include "software_timer.h"


int timer_counter[10] ={ 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0};
int timer_flag [10] ={ 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0};

void setTimer(int duration, int index){
	timer_counter[index] = duration;
	timer_flag [index] = 0;
}

void timerRun(){
	for (int i =0 ;i < 10; i++){
		if (timer_counter[i] > 0){
			timer_counter[i]--;
			if (timer_counter[i] == 0){
				timer_flag [i] = 1;
			}
		}
	}
}
