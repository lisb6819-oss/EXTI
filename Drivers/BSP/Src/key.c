// #include "key.h"


// uint8_t key_scan(uint8_t mode)
// {
//   static uint8_t key_up = 1; // Key release flag
//   uint8_t key_val = 0; // Key value
//     if (mode) key_up = 1; // If mode is non-zero, reset key release flag

//     if(key_up && (KEY0==0||KEY1==0||KEY2==0||WK_UP==1))
//     {
//         HAL_Delay(10); // Delay for debouncing
//         key_up = 0; // Clear key release flag
//         if(KEY0==0) key_val = KEY0_PRES; // Key 0 pressed
//         if(KEY1==0) key_val = KEY1_PRES; // Key 1 pressed
//         if(KEY2==0) key_val = KEY2_PRES; // Key 2 pressed
//         if(WK_UP==1) key_val = WKUP_PRES; // Wake-up button pressed
//     }
//     else if(KEY0==1&&KEY1==1&&KEY2==1&&WK_UP==0) key_up = 1; // All keys released
  
//     return key_val; // Return the pressed key value
// }