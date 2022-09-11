

******************************************************************************
* \Syntax          : DoorSensor_SentState_10ms( DoorSensor_Type Sensor_Num)                  
* \Description     : Door state message will be sent every 10 ms to ECU 2                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ConfigPtr              
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void DoorSensor_SendState_10ms( DoorSensor_Type Sensor_Num);