/*
 * scanLed.c
 *
 *  Created on: Dec 1, 2023
 *      Author: Minh Hieu
 */


#include "scanLed.h"

int enableChange = 0;
void turnoffAll(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
}
void display7SEGtopbottom(int num){
	  if (num == 0){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
	  }
	  else if (num == 1){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
	  }
	  else if (num == 2){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
	  else if (num == 3){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
	  else if (num == 4){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
	  else if (num == 5){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
	  else if (num == 6){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
	  else if (num == 7){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
	  }
	  else if (num == 8){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
	  else if (num == 9){
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	  }
}
void display7SEGleftright(int num){
	  if (num == 0){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	  }
	  else if (num == 1){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	  }
	  else if (num == 2){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
	  else if (num == 3){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
	  else if (num == 4){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
	  else if (num == 5){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
	  else if (num == 6){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
	  else if (num == 7){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	  }
	  else if (num == 8){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
	  else if (num == 9){
		  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	  }
}

void onRed1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, RESET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
}
void onYellow1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, RESET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
}
void onGreen1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, RESET);
}
void onRed2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, RESET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, SET);
}
void onYellow2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, RESET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, SET);
}
void onGreen2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, RESET);
}
void toggleRed(){
	if (enableChange == 0){
		onRed1();
		onRed2();
	}
	else if (enableChange == 1){
		turnoffAll();
	}
}
void toggleYellow(){
	if (enableChange == 0){
		onYellow1();
		onYellow2();
	}
	else if (enableChange == 1){
		turnoffAll();
	}
}
void toggleGreen(){
	if (enableChange == 0){
		onGreen1();
		onGreen2();
	}
	else if (enableChange == 1){
		turnoffAll();
	}
}

void counterBoard(int num1, int num2){
	int index1 = num1/10;
	int index2 = num1%10;
	int index3 = num2/10;
	int index4 = num2%10;
	if (enableChange == 0){
		HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, RESET);
		HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
		HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, RESET);
		HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
		display7SEGtopbottom(index1);
		display7SEGleftright(index3);
		enableChange = 1;
	}
	else if (enableChange == 1){
		HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
		HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, RESET);
		HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
		HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, RESET);
		display7SEGtopbottom(index2);
		display7SEGleftright(index4);
		enableChange = 0;
	}
}
void scanLed(){
	switch (status){
	case AUTO_RED_GREEN:
		onRed1();
		onGreen2();
		counterBoard(red_time_show, green_time_show);
		break;
	case AUTO_RED_YELLOW:
		onRed1();
		onYellow2();
		counterBoard(red_time_show, yellow_time_show);
		break;
	case AUTO_GREEN_RED:
		onGreen1();
		onRed2();
		counterBoard(green_time_show, red_time_show);
		break;
	case AUTO_YELLOW_RED:
		onYellow1();
		onRed2();
		counterBoard(yellow_time_show, red_time_show);
		break;
	case MANUAL_RED:
		toggleRed();
		counterBoard(1, red_time_tmp);
		break;
	case MANUAL_YELLOW:
		toggleYellow();
		counterBoard(2, yellow_time_tmp);
		break;
	case MANUAL_GREEN:
		toggleGreen();
		counterBoard(3, green_time_tmp);
	default: break;
	}
}
