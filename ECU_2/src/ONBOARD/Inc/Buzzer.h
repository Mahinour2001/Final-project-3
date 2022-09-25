******************************************************************************
* \Syntax          : SBuzzer_init(Channel_Id_Types Buzzer_Id)              
* \Description     : Intialize BUZZER with its port and pin number                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Buzzer_Id              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  :Buzzer_Id-> typedef struct
*  \Arguments Range:Buzzer_Id-> 0-1000 
*  \Arguments size :14
*******************************************************************************/

void Buzzer_init(Channel_Id_Types Buzzer_Id);