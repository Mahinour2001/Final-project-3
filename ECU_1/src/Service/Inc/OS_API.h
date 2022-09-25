



******************************************************************************
* \Syntax          : OS_voidCreateTask(u8 Copy_u8ID, u8 Copy_u8Periodicity, u8 Copy_u8InitialDelay, void (*ptr)(void))                
* \Description     : CreateTask                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) :  Copy_u8ID,  Copy_u8Periodicity,  Copy_u8InitialDelay, void (*ptr)(void)              
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : u8,u8,u8,void (*ptr)
*  \Arguments Range:Copy_u8ID-> 0-1000  , Copy_u8Periodicity-> Integer(no range) ,Copy_u8InitialDelay->Integer(no range)
*  \Arguments size :u8,u8,u8,void

********************************************************************************/


void OS_voidCreateTask(u8 Copy_u8ID, u8 Copy_u8Periodicity, u8 Copy_u8InitialDelay, void (*ptr)(void));



 ******************************************************************************
* \Syntax          : OS_voidDeleteTask(u8 Copy_u8ID)               
* \Description     : DeleteTask                                                                               
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Copy_u8ID            
* \Parameters (out): void                                                      
* \Return value:   : void
* \Arguments Type  : u8
*  \Arguments Range:Copy_u8ID-> 0-1000 
*  \Arguments size :u8

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
* \Arguments Type  : u8,u8
*  \Arguments Range:Copy_u8ID-> 0-1000  , Copy_u8SuspendTime-> Integer(no range) 
*  \Arguments size :u8,u8

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
* \Arguments Type  : None
*  \Arguments Range: None
*  \Arguments size : None
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
* \Arguments Type  : u8
*  \Arguments Range:Copy_u8ID-> 0-1000 
*  \Arguments size :u8
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
* \Arguments Type  : u8
*  \Arguments Range:Copy_u8ID-> 0-1000 
*  \Arguments size :u8
*******************************************************************************/

u8 OS_u8GetTaskState(u8 Copy_u8ID);
