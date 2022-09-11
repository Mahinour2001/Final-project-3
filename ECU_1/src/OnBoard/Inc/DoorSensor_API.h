

typedef enum {

  DoorSensor_0,
  DoorSensor_1,
  DoorSensor_2,
    
}DoorSensor_Type;


typedef uint32  Sensor_Read ;



******************************************************************************
* \Syntax          : DoorSensor_Init(void)                
* \Description     : DoorSensor_Initilization                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : void              
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void DoorSensor_Init(void);


******************************************************************************
* \Syntax          : DoorSensor_ReadStatus( DoorSensor_Type Sensor_Num)                  
* \Description     : Read the sensor readings every 10 ms                                                                                  
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ConfigPtr              
* \Parameters (out): Sensor_Read                                                      
* \Return value:   : Sensor_Read
*******************************************************************************/

Sensor_Read DoorSensor_ReadStatus( DoorSensor_Type Sensor_Num);



