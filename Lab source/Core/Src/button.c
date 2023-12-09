#include "global.h"
int KeyReg0[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};

int TimeOutForKeyPress =  0;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
int button4_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}
int isButton4Pressed(){
	if(button4_flag == 1){
		button4_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess1(){
	button1_flag=1;
	clear_all_led();
}
void subKeyProcess2(){
	button2_flag=1;
	clear_all_led();
}
void subKeyProcess3(){
	button3_flag=1;
	clear_all_led();
}
void subKeyProcess4(){
	button4_flag=1;
	clear_all_led();
}


void getKeyInput1(){
  KeyReg2[0] = KeyReg1[0];
  KeyReg1[0] = KeyReg0[0];
  //Add your button here
  KeyReg0[0] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);

  if ((KeyReg1[0] == KeyReg0[0]) && (KeyReg1[0] == KeyReg2[0])){
    if (KeyReg2[0] != KeyReg3[0]){
      KeyReg3[0] = KeyReg2[0];

      if (KeyReg0[0] == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess1();
      }
      else{
    	  TimeOutForKeyPress = 0;
      }
    }
    else{
    		TimeOutForKeyPress--;
    		if (TimeOutForKeyPress == 0){
    			TimeOutForKeyPress = 500;
    			subKeyProcess1();
    		}
    }
  }
}

void getKeyInput2(){
  KeyReg2[1] = KeyReg1[1];
  KeyReg1[1] = KeyReg0[1];
  //Add your button here
  KeyReg0[1] = HAL_GPIO_ReadPin(Button2_GPIO_Port,Button2_Pin);

  if ((KeyReg1[1] == KeyReg0[1]) && (KeyReg1[1] == KeyReg2[1])){
    if (KeyReg2[1] != KeyReg3[1]){
      KeyReg3[1] = KeyReg2[1];

      if (KeyReg0[1] == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess2();
      }
      else{
    	  TimeOutForKeyPress = 0;
      }
    }
    else{
    		TimeOutForKeyPress--;
    		if (TimeOutForKeyPress == 0){
    			TimeOutForKeyPress = 500;
    			subKeyProcess2();
    		}
    }
  }
}

void getKeyInput3(){
  KeyReg2[2] = KeyReg1[2];
  KeyReg1[2] = KeyReg0[2];
  //Add your button here
  KeyReg0[2] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);

  if ((KeyReg1[2] == KeyReg0[2]) && (KeyReg1[2] == KeyReg2[2])){
    if (KeyReg2[2] != KeyReg3[2]){
      KeyReg3[2] = KeyReg2[2];

      if (KeyReg0[2] == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess3();
      }
      else{
    	  TimeOutForKeyPress = 0;
      }
    }
    else{
    		TimeOutForKeyPress--;
    		if (TimeOutForKeyPress == 0){
    			TimeOutForKeyPress = 500;
    			subKeyProcess3();
    		}
    }
  }
}

void getKeyInput4(){
  KeyReg2[3] = KeyReg1[3];
  KeyReg1[3] = KeyReg0[3];
  //Add your button here
  KeyReg0[3] = HAL_GPIO_ReadPin(Button4_GPIO_Port, Button4_Pin);

  if ((KeyReg1[3] == KeyReg0[3]) && (KeyReg1[3] == KeyReg2[3])){
    if (KeyReg2[3] != KeyReg3[3]){
      KeyReg3[3] = KeyReg2[3];

      if (KeyReg0[3] == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess4();
      }
      else{
    	  TimeOutForKeyPress = 0;
      }
    }
    else{
    		TimeOutForKeyPress--;
    		if (TimeOutForKeyPress == 0){
    			TimeOutForKeyPress = 500;
    			subKeyProcess4();
    		}
    }
  }
}
