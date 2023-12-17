/*
 * global.c
 */

#include "global.h"

/* Private function prototypes -----------------------------------------------*/
#ifdef __GNUC__
 /* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
 #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
 #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

PUTCHAR_PROTOTYPE
{
 /* Place your implementation of fputc here */
 /* e.g. write a character to the USART */
 HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, 100);
 return ch;
}


int led_status = 0;

int counter_red=0;
int counter_green=0;
int counter_yellow=0;

int temp=0;

int count=0;

int buzzer_input=0;

