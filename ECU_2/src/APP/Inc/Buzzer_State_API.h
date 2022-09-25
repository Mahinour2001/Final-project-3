
******************************************************************************
* \Syntax          : Buzzer_updateState(uint8 Buzzer_Num)             
* \Description     : Update Buzzer state according to door state and car state                                                                                
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Buzzer_Num              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : Buzzer_Num->uint8
*  \Arguments Range: Buzzer_Num-> 0-1000
*  \Arguments size : Buzzer_Num->uint8  
*******************************************************************************/

void Buzzer_updateState(uint8 Buzzer_Num);