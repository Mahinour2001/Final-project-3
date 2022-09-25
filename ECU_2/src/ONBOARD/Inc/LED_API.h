******************************************************************************
* \Syntax          : LED_init(Channel_Id_Types LED_Id)           
* \Description     : Intialize LED with its port and pin number                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : LED_Id              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  :LED_Id-> typedef struct
*  \Arguments Range:LED_Id-> 0-1000 
*  \Arguments size :14
*******************************************************************************/

void LED_init(Channel_Id_Types LED_Id);