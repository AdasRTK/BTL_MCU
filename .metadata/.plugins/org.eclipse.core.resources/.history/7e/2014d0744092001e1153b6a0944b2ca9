/*
 * scheduler.c
 *
 *  Created on: Nov 25, 2023
 *      Author: Minh Hieu
 */

#include "scheduler.h"

company_t company;
int timestamp = 0;
uint32_t taskid = 0;
char str[50];


uint32_t SCH_Add_Task(void (* pFunction)(), uint32_t DELAY, uint32_t PERIOD){
	worker_t * task = (worker_t *)malloc(sizeof(worker_t));
	task->taskPointer = pFunction;
	task->taskID = taskid++;
	task->Delay = DELAY;
	task->Period = PERIOD;
	task->nextTask = NULL;

	if (company.number >= SCH_MAX_TASKS){
		return 0 ;
		//company is full
	}
	if (company.number == 0){ // company is empty
		company.head = task;
		company.number ++;
		return 0;
	}

	worker_t *current = company.head;
	worker_t *prev = NULL;
	int delay_tmp = task->Delay - current->Delay;
	while (delay_tmp >= 0 && current != NULL){
		task->Delay = delay_tmp;
		prev = current;
		current = current->nextTask;
		if (current != NULL) delay_tmp -= current->Delay;
	}

	if (prev == NULL){ // insert at head
		task->nextTask = current;
		current->Delay -= task->Delay;
		company.head = task;
	}
	else if (current == NULL){ // insert at tail
		prev->nextTask = task;
	}
	else{ // insert at middle
		prev->nextTask = task;
		task->nextTask = current;
		current->Delay -= task->Delay;
	}

	company.number++;
	return 0;
}
uint8_t SCH_Delete_Task(uint32_t taskID){
	if (company.number == 0) return 0;
	worker_t *current = company.head;
	worker_t *prev = NULL;

	while (current->taskID != taskID && current != NULL){
		prev = current;
		current = current->nextTask;
	}
	// now current is at node with the same ID

	if (current == NULL) return 0; // can't find task
	if (prev == NULL) { //delete head
		company.head= current->nextTask;
		free(current);
		if (current->nextTask != NULL){
			current->nextTask->Delay += current->Delay;
		}
	}
	else if (current->nextTask == NULL) //delete tail
	{
		free(current);
		prev->nextTask = NULL;
	}
	else{ // delete middle
		prev->nextTask = current->nextTask;
		current->nextTask->Delay += current->Delay;
		current->nextTask = NULL;
		free(current);
	}
	company.number --;


	return 0;
}
void SCH_Dispatch_Tasks(){
	while (company.head->Delay == 0 && company.number > 0){
		sprintf(str, "TaskID %ld timeout at timestamp %d ms \r\n", company.head->taskID, timestamp);
		sendSignal(str);
		(*company.head->taskPointer)(); // execute toggle leds
		if (company.head->Period != 0) SCH_Add_Task(company.head->taskPointer,
				company.head->Period, company.head->Period);
		SCH_Delete_Task(company.head->taskID);
	}
	// Enter low-power mode (Sleep mode). The MCU will wake up on the next interrupt
	    HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFI);
}
void SCH_Update(){
	timestamp += 10;
	if (company.number != 0 && company.head->Delay != 0) {
		company.head->Delay --;
	}
}





















