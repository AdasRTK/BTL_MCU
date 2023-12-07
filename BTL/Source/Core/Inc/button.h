/*
 * button.h
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */

#include "main.h"

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButtonPressed(int key);
void processKeyInput(int key);

#endif /* INC_BUTTON_H_ */
