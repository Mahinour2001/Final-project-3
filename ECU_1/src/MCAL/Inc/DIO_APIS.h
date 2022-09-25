
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
* \Arguments Type  :ChannelId-> typedef struct
*  \Arguments Range:Channel_Id-> 0-1000 
*  \Arguments size :14
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
* \Arguments Type  :ChannelId-> typedef struct ,Level -> typedef enum
*  \Arguments Range:Channel_Id-> 0-1000  , Level-> 0-1
*  \Arguments size :Channel_Id->14 ,Level->2
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
* \Arguments Type  :PortId-> typedef enum 
*  \Arguments Range:PortId-> 0-5  
*  \Arguments size :PortId->6 
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
* \Arguments Type  :PortId-> typedef enum , Level -> typedef enum
*  \Arguments Range:PortId-> 0-5    , Level-> 0-1
*  \Arguments size :PortId->6  , Level-> 2
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
* \Arguments Type  :ChannelId-> typedef struct
*  \Arguments Range:Channel_Id-> 0-1000 
*  \Arguments size :14
*******************************************************************************/

DIO_LevelType Dio_FlipChannel(Channel_Id_Types ChannelId);