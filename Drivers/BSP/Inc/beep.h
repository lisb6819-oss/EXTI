#ifndef BEEP_H
#define BEEP_H
#include "stm32f1xx_hal.h"
#include "main.h"


/*BEEP是PB8，BEEP（1）时响起*/
#define BEEP(x)   do{(x) ? HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_RESET) : HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_SET);} while(0)

#define BEEP_TOGGLE()   HAL_GPIO_TogglePin(BEEP_GPIO_Port, BEEP_Pin)

#endif // BEEP_H