



******************************************************************************
* \Syntax          : OS_voidCreateTask(u8 Copy_u8ID, u8 Copy_u8Periodicity, u8 Copy_u8InitialDelay, void (*ptr)(void))                
* \Description     : CreateTask                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) :  Copy_u8ID,  Copy_u8Periodicity,  Copy_u8InitialDelay, void (*ptr)(void)              
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/


void OS_voidCreateTask(u8 Copy_u8ID, u8 Copy_u8Periodicity, u8 Copy_u8InitialDelay, void (*ptr)(void));



 ******************************************************************************
* \Syntax          : OS_voidDeleteTask(u8 Copy_u8ID)               
* \Description     : DeleteTask                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Copy_u8ID            
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void OS_voidDeleteTask(u8 Copy_u8ID);


******************************************************************************
* \Syntax          : OS_voidSuspendTask(u8 Copy_u8ID, u8 Copy_u8SuspendTime)             
* \Description     : SuspendTask                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Copy_u8ID,Copy_u8SuspendTime            
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void OS_voidSuspendTask(u8 Copy_u8ID, u8 Copy_u8SuspendTime);



 ******************************************************************************
* \Syntax          : OS_voidStartScheduler(void)        
* \Description     : StartScheduler                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : void          
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void OS_voidStartScheduler(void);


 ******************************************************************************
* \Syntax          : OS_voidResumeTask(u8 Copy_u8ID)          
* \Description     : ResumeTask                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Copy_u8ID          
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

void OS_voidResumeTask(u8 Copy_u8ID);


 ******************************************************************************
* \Syntax          : OS_u8GetTaskState(u8 Copy_u8ID)        
* \Description     : GetTaskState                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Copy_u8ID          
* \Parameters (out): void                                                      
* \Return value:   : void
*******************************************************************************/

u8 OS_u8GetTaskState(u8 Copy_u8ID);
