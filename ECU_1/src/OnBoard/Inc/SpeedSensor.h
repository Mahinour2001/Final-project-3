typedef enum {

  SpeedSensor_0,
  SpeedSensor_1,
  SpeedSensor_2,
    
}SpeedSensor_Type;


typedef uint32  Sensor_Read ;




******************************************************************************
* \Syntax          : SpeedSensor_Init(void)                
* \Description     : SpeedSensor Initilization                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : void              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : None
*  \Arguments Range: None
*  \Arguments size : None
*******************************************************************************/

void SpeedSensor_Init(void);

******************************************************************************
* \Syntax          : SpeedSensor_ReadStatus( DoorSensor_Type Sensor_Num)                  
* \Description     : Read the sensor readings every 5 ms                                                                                  
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ConfigPtr              
* \Parameters (out): Sensor_Read                                                      
* \Return value:   : Sensor_Read
* \Arguments Type  : Sensor_Num->typedef enum , Sensor_Read->typedef uint32
*  \Arguments Range: Sensor_Num->0-2 , Sensor_Read-> no range (Integer uint32)
*  \Arguments size : Sensor_Num->typedef enum , Sensor_Read->typedef uint32
*******************************************************************************/

Sensor_Read SpeedSensor_ReadStatus( DoorSensor_Type Sensor_Num);


