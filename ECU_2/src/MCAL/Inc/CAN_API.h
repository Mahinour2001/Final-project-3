
******************************************************************************
* \Syntax          : CAN_Initialize(uint32 Channel_Id ,uint32 speed, uint32 linkingPort,uint32 interrupt)      
* \Description     : Initialisation of the channel, setting the speed, linking port and interrupt for non PnP devices                                                                              
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Channel_Id,speed,linkingPort,interrupt             
* \Parameters (out): void                                                      
* \Return value:   : void
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
*******************************************************************************/

uint32 CAN_Write(uint32 Channel_Id);




