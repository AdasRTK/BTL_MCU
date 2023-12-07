/*
 * led.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#include <led.h>
int status = 0;
int h_number = 0;
int v_number = 0;
int led_buffer [4] = {0 , 0 , 0 , 0};

void updateClockBuffer(){
    led_buffer[0] = h_number / 10;
    led_buffer[1] = h_number % 10;
    led_buffer[2] = v_number / 10;
    led_buffer[3] = v_number % 10;
}
void countDown(){
	h_number--;
	v_number--;
}
void setInitialValue(int h, int v){
	h_number = h;
	v_number = v;
}
