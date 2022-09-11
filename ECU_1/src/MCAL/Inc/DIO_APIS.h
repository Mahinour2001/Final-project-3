
typedef enum {
	
 PIN0                                         ,
 PIN1                                         ,
 PIN2                                         ,
 PIN3                                         ,
 PIN4                                         ,
 PIN5                                         ,
 PIN6                                         ,
 PIN7                                         
 
}DIO_ChannelType;

typedef enum {

 PortA                                        ,
 PortB                                        ,
 PortC                                        ,
 PortD                                        ,
 PortE                                        ,
 PortF


}DIO_PortType;

typedef enum {

 LOW                                           ,
 HIGH                                          

}DIO_LevelType;


typedef struct  {


 DIO_PortType  Port_num                       ;
 DIO_ChannelType Chann_n                      ;            

}Channel_Id_Types;


typedef uint32  DIO_PortLevelType ;



******************************************************************************
* \Syntax          : DIO_LevelType Dio_ReadChannel(Channel_Id_Types ChannelId)                             
* \Description     : Read PIN by its Pin number and return its value                                                                                                    
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ChannelId                     
* \Parameters (out): DIO_LevelType                                                      
* \Return value:   : DIO_LevelType
*******************************************************************************/

DIO_LevelType Dio_ReadChannel(Channel_Id_Types ChannelId);

******************************************************************************
* \Syntax          : void Dio_WriteChannel(Channel_Id_Types ChannelId,DIO_LevelType Level)                         
* \Description     : Write on PIN High or Low                                                                                                   
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ChannelId,Level                   
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void Dio_WriteChannel(Channel_Id_Types ChannelId,DIO_LevelType Level);

******************************************************************************
* \Syntax          : DIO_PortLevelType Dio_ReadPort(DIO_PortType PortId)                     
* \Description     : Read Port and return Port                                                                                                 
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : PortId                
* \Parameters (out): DIO_PortLevelType                                                      
* \Return value:   : DIO_PortLevelType
*******************************************************************************/

DIO_PortLevelType Dio_ReadPort(DIO_PortType PortId);

******************************************************************************
* \Syntax          : Dio_WritePort(DIO_PortType PortId,DIO_PortLevelType Level)                    
* \Description     : Write on Port                                                                                        
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : PortId,Level                
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void Dio_WritePort(DIO_PortType PortId,DIO_PortLevelType Level);

******************************************************************************
* \Syntax          : Dio_FlipChannel(Channel_Id_Types ChannelId)                   
* \Description     : Flip Value on Pin                                                                                      
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) :ChannelId              
* \Parameters (out): DIO_LevelType                                                      
* \Return value:   : DIO_LevelType
*******************************************************************************/

DIO_LevelType Dio_FlipChannel(Channel_Id_Types ChannelId);