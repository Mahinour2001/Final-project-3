******************************************************************************
* \Syntax          : LED_updateState(uint8 LED_Num)             
* \Description     : Update Buzzer state according to door state and car state                                                                    
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : LED_Num              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : LED_Num->uint8
*  \Arguments Range: LED_Num-> 0-1000
*  \Arguments size : LED_Num->uint8  
*******************************************************************************/

void LED_updateState(uint8 LED_Num);