#ifndef __KEY_H
#define __KEY_H

#include "stm32f1xx_hal.h"
#include "main.h"

/*KEY0是PB1，KEY1是PB3，KEY2是PB4，WK_UP是PA0。1,2,3按下为低电平，WK_UP按下为高电平*/

#define WK_UP HAL_GPIO_ReadPin(WK_UP_GPIO_Port, WK_UP_Pin)
#define KEY0 HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin)
#define KEY1 HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)
#define KEY2 HAL_GPIO_ReadPin(KEY2_GPIO_Port, KEY2_Pin)

#define KEY0_PRES 1
#define KEY1_PRES 2
#define KEY2_PRES 3
#define WKUP_PRES 4

/*按键扫描函数优先级（同时按下多个按键时）：WK_UP > KEY2 > KEY1 > KEY0
  mode为0时，只检测一次按键，为1时，持续检测
  mode为1时，持续检测
  @retval 按键值
                KEY0_PRES: 1,Key 0 按下
                KEY1_PRES: 2,Key 1 按下
                KEY2_PRES: 3,Key 2 按下
                WKUP_PRES: 4,Wake-up button 按下
 */

uint8_t key_scan(uint8_t mode);

#endif // __KEY_H