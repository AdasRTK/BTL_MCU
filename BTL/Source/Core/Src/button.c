/*
 * button.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Bao Hinh
 */
#include "button.h"

int button_flag[4] = {0};
int KeyState[4][4] = {
    {0, 0, 0, 0},
    {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE},
    {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE},
    {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE}
};
int TimerForKeyPress = 200;

int button_ports[4] = {0, BUTTON1_GPIO_Port, BUTTON2_GPIO_Port, BUTTON3_GPIO_Port};
int button_pins[4] = {0, BUTTON1_Pin, BUTTON2_Pin, BUTTON3_Pin};

int isButtonPressed(int key) {
    if (button_flag[key] == 1) {
        button_flag[key] = 0;
        return 1;
    }
    return 0;
}

void setButtonFlag(int key) {
    button_flag[key] = 1;
}

void processKeyInput(int key) {
    KeyState[key][0] = KeyState[key][1];
    KeyState[key][1] = KeyState[key][2];

    KeyState[key][2] = HAL_GPIO_ReadPin(button_ports[key], button_pins[key]);

    if ((KeyState[key][0] == KeyState[key][1]) && (KeyState[key][1] == KeyState[key][2])) {
        if (KeyState[key][3] != KeyState[key][2]) {
            KeyState[key][3] = KeyState[key][2];
            if (KeyState[key][2] == PRESSED_STATE) {
                setButtonFlag(key);
                TimerForKeyPress = 200;
            }
        } else {
            TimerForKeyPress--;
            if (TimerForKeyPress == 0) {
                KeyState[key][3] = NORMAL_STATE;
            }
        }
    }
}
