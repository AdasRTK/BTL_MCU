/*
 * fsm_automatic.h
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include <led.h>
void setHorizontalLeds(int red, int green);
void setVerticalLeds(int red, int green);

void fsm_automatic_run();
#endif /* INC_FSM_AUTOMATIC_H_ */
