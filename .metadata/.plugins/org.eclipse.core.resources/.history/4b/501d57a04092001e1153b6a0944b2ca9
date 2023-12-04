/*
 * scheduler.h
 *
 *  Created on: Nov 25, 2023
 *      Author: Minh Hieu
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "global.h"
#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"
void redToggle();
void yellowToggle();
void greenToggle();
void blueToggle();
void whiteToggle();


//dinh nghia linked list

struct worker_t{
	void (*taskPointer)();
	uint32_t taskID;
	uint32_t Delay;
	uint32_t Period;
	struct worker_t * nextTask;


};

typedef struct worker_t worker_t;

typedef struct{
	worker_t* head;
	int number;
} company_t;


void SCH_Init(void);
void SCH_Update();
uint32_t SCH_Add_Task(void (* pFunction)(),
		uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t taskID);
void SCH_Dispatch_Tasks();






#endif /* INC_SCHEDULER_H_ */



