/*
 * button.h
 *
 *  Created on: Oct 5, 2023
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"

#define NORMAL_STATE 1
#define PRESSED_STATE 0

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
int isButton4Pressed();

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();
void getKeyInput4();

#endif /* INC_BUTTON_H_ */

