/*
 * global.h
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

#define INIT 1
#define RED_GREEN 2
#define RED_YELLOW 3
#define GREEN_RED 4
#define GREEN_YELLOW 5

#define MAN_RED 11
#define MAN_YELLOW 12
#define MAN_GREEN 13

extern int status;
extern int led_buffer[4];
extern int index_led;
extern int h_number;
extern int v_number;
void display7SEG(int num);
void update7SEG (int index);
void updateClockBuffer();
void countDown();
void setInitialValue(int h, int v);

extern int red_duration;
extern int green_duration;
extern int yellow_duration;
#endif /* INC_LED_H_ */
