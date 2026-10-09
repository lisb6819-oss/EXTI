#ifndef LED_H
#define LED_H
#include "stm32f1xx_hal.h"
#include "main.h"


/*LED0是PB5，LED1是PC13，LED0和LED1都是1点亮，0熄灭*/

#define LED0(x)   do{(x) ? HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET) : HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_RESET);} while(0)
#define LED1(x)   do{(x) ? HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET) : HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);} while(0)

#define LED0_TOGGLE()   HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin)
#define LED1_TOGGLE()   HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin)



#endif // LED_H