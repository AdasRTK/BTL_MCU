/*
 * global.h
 *
 *  Created on: Sep 28, 2023
 *      Author: KAI
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 1

#define YELLOW 2
#define GREEN 3
#define RED 5

#define AUTO_RED_GREEN 4
#define AUTO_RED_YELLOW 6
#define AUTO_GREEN_RED 7
#define AUTO_YELLOW_RED 8

#define BUZZER 10
#define GO 11

#define MANUAL_RED_GREEN 14
#define MANUAL_RED_YELLOW 15
#define MANUAL_GREEN_RED 16
#define MANUAL_YELLOW_RED 17

#define TUNING_RED 19
#define TUNING_YELLOW 20
#define TUNING_GREEN 21

#define INIT1 22
#define PEDES_RED_GREEN 23
#define PEDES_RED_YELLOW 24
#define PEDES_GREEN_RED 25
#define PEDES_YELLOW_RED 26

#include"software_timer.h"
#include"main.h"
#include"fsm_automatic.h"
#include"fsm_manual.h"
#include"fsm_pedestrian.h"
#include"fsm_tuning.h"
#include"button.h"
#include"controller.h"
#include <stdio.h>
#include <string.h>

extern TIM_HandleTypeDef htim3;
extern UART_HandleTypeDef huart2;

extern int led_status;

extern int temp;

extern int counter_red;
extern int counter_green;
extern int counter_yellow;

extern int count;

extern int buzzer_input;


#endif /* INC_GLOBAL_H_ */
