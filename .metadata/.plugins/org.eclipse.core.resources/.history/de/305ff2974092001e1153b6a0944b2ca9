/*
 * global.h
 *
 *  Created on: Nov 25, 2023
 *      Author: Minh Hieu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "scheduler.h"
#include "main.h"
#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"
#include "software_timer.h"
#include "button.h"
#include "fsm_auto.h"
#include "fsm_manual.h"
#include "scanLed.h"
#include "string.h"
#define SCH_MAX_TASKS 32


void sendSignal(char *str);
#define INIT 90
#define AUTO_RED_GREEN 91
#define AUTO_RED_YELLOW 92
#define AUTO_GREEN_RED 93
#define AUTO_YELLOW_RED 94

//definition for manual state
#define MANUAL_RED 20
#define MANUAL_YELLOW 21
#define MANUAL_GREEN 22
#define MANUAL_INIT 23

//declare some global variables
extern int status;// show status
extern int red_time; //show red time length
extern int yellow_time; // show yellow time length
extern int green_time; // show green time length

#endif /* INC_GLOBAL_H_ */


//definition for automatic state
