
******************************************************************************
* \Syntax          : CAN_Initialize(uint32 Channel_Id ,uint32 speed, uint32 linkingPort,uint32 interrupt)      
* \Description     : Initialisation of the channel, setting the speed, linking port and interrupt for non PnP devices                                                                              
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Channel_Id,speed,linkingPort,interrupt             
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : uint32,uint32,uint32,uint32
*  \Arguments Range:Channel_Id-> 0-1000  , speed-> 0-200 , linkingPort ->0-100 , interrupt -> 0-100
*  \Arguments size :uint32,uint32,uint32,uint32
*******************************************************************************/

void CAN_Initialize(uint32 Channel_Id ,uint32 speed, uint32 linkingPort,uint32 interrupt);

******************************************************************************
* \Syntax          : CAN_Write(uint32 Channel_Id,uint32 CAN_data)                
* \Description     : Sending a CAN message                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Channel_Id,CAN_data              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : uint32,uint32
*  \Arguments Range:Channel_Id-> 0-1000  , CAN_data-> 0-30 
*  \Arguments size :uint32,uint32
*******************************************************************************/

void CAN_Write(uint32 Channel_Id,uint32 CAN_data);

******************************************************************************
* \Syntax          : CAN_Read(uint32 Channel_Id)                
* \Description     : Reading a CAN message                                                                      
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Channel_Id              
* \Parameters (out): uint32                                                      
* \Return value:   : uint32
* \Arguments Type  : uint32
*  \Arguments Range:Channel_Id-> 0-1000 
*  \Arguments size :uint32
*******************************************************************************/

uint32 CAN_Write(uint32 Channel_Id);




