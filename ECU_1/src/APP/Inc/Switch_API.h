

******************************************************************************
* \Syntax          : Switch_init(Channel_Id_Types Switch_Id);                
* \Description     : Intialize Switch with its port and pin number                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Switch_Id              
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void Switch_init(Channel_Id_Types Switch_Id);

******************************************************************************
* \Syntax          : Switch_SendState_20ms( DoorSensor_Type Sensor_Num)                  
* \Description     : Light switch state message will be sent every 20 ms to ECU 2                                                                                
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ConfigPtr              
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void Switch_SendState_20ms(Channel_Id_Types Switch_Id );