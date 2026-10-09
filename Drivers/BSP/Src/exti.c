#include "main.h"
#include "led.h"
#include "beep.h"
#include "key.h"



void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  HAL_Delay(20); // Delay for debouncing
  switch(GPIO_Pin)
  {
    case WK_UP_Pin:
      // Handle WKUP button press
      if(WK_UP==1)
      {
        BEEP_TOGGLE(); // Toggle BEEP
      }
      break;
    case KEY0_Pin:
      // Handle KEY0 button press
      if(KEY0==0)
      {
        LED0_TOGGLE(); // Toggle LED0
        LED1_TOGGLE(); // Toggle LED1
      }
      break;
    case KEY1_Pin:
      // Handle KEY1 button press
      if(KEY1==0)
      {
        LED0_TOGGLE(); // Toggle LED0
      }
      break;
    case KEY2_Pin:
      // Handle KEY2 button press
      if(KEY2==0)
      {
        LED1_TOGGLE(); // Toggle LED1
      }
      break;
    default:
      break;
  }
}