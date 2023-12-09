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

#define MANUAL_RED 14
#define MANUAL_YELLOW 15
#define MANUAL_GREEN 16

#include"software_timer.h"
#include"main.h"
#include"fsm_automatic.h"
#include"fsm_manual.h"
#include"fsm_pedestrian.h"
#include"button.h"
#include"controller.h"

extern int led_status;
extern int buzzer_status;
extern int ontime;

extern int temp;

extern int counter_red;
extern int counter_green;
extern int counter_yellow;


#endif /* INC_GLOBAL_H_ */
