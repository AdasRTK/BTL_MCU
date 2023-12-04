/*
 * button.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Minh Hieu
 */


#include "button.h"

int KeyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};


int button_flag[4] = {0,0,0,0};
int TimeOutForKeyPress =  200;

int isButtonPressed(int index){
	if (button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int i){
	button_flag[i] = 1;
}

GPIO_PinState ReadPin(int index){
	if (index == 0) return HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	else if (index == 1) return HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	else if (index == 2) return HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	else return 0;
}

void getKeyinput(){
	for (int i = 0 ; i < 3; i++){
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		KeyReg2[i] = ReadPin(i);
		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg3[i] != KeyReg2[i]){
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg3[i] == PRESSED_STATE){
					TimeOutForKeyPress= 200;
					subKeyProcess(i);
				}
			}
			else{
				TimeOutForKeyPress --;
				if (TimeOutForKeyPress ==0 ){
					KeyReg3[i] = NORMAL_STATE;
				}
			}
		}
	}

}
