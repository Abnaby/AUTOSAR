#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"


#include "../MRTOS/inc/MRTOS_Scheduler.h"

/************** In Debugging Mode ******************/
#define DEBUG 1


#if DEBUG == 1
	u8 t1,t2,t3,t4 ;
#endif




#define TASK(__TASK_REF__) void FUNC_##__TASK_REF__(void)

#define TASK_SYMBOL(__TASK_REF__) FUNC_##__TASK_REF__

/************	TASK Ref *********************/
MRTOS_Task T1_ReadDoorSensor_10MS;
MRTOS_Task T2_DoorState_12MS;
MRTOS_Task T3_MainAlgo_15MS;
MRTOS_Task T4_LedState_18MS;




/*********** Task Functions *******************/
TASK(T1_ReadDoorSensor_10MS)
{
	while(1)
	{
#if DEBUG == 1
		t1 ^=1 ;
#endif
		ReadDoorSensor_Runnable();
		/* Tick = 1ms */
		MRTOS_voidTaskDelay(&T1_ReadDoorSensor_10MS, 10);
	}
}

TASK(T2_DoorState_12MS)
{
	while(1)
	{
#if DEBUG == 1
		t2 ^=1 ;
#endif
		ReadDoorState_Runnable();
		/* Tick = 1ms */
		MRTOS_voidTaskDelay(&T2_DoorState_12MS, 12);
	}
}

TASK(T3_MainAlgo_15MS)
{
	while(1)
	{
#if DEBUG == 1
		t3 ^=1 ;
#endif
		DoorLock_Indicator_Runnable();
		/* Tick = 1ms */
		MRTOS_voidTaskDelay(&T3_MainAlgo_15MS, 15);

	}
}

TASK(T4_LedState_18MS)
{
	while(1)
	{
#if DEBUG == 1
		t4 ^=1 ;
#endif

		setLedState_Runnable();
		/* Tick = 1ms */
		MRTOS_voidTaskDelay(&T4_LedState_18MS, 18)	;
	}
}





/*********** MCU Init *************************/

void HW_init(void)
{
	MRTOS_ErrorID LOC_Error ;

	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2, PORTA);
	/*****************************************************
	 * @brief: 	Pinout
	 *****************************************************/
	#define CHANNEL_1	PORTA,PIN3	// switch
	#define CHANNEL_2	PORTA,PIN7	// LED
	GPIO_voidSetPinDirection(CHANNEL_1, GPIO_INPUT_FLOATING);
	GPIO_voidSetPinDirection(CHANNEL_2, GPIO_OUTPUT_10MHZ_PUSH_PULL);

	LOC_Error = MRTOS_voidInit();
	if(LOC_Error != NoError)
		while(1);

}

int main(void){
	MRTOS_ErrorID LOC_Error ;

	/*****************		HW_Init		*************************/
	HW_init();
	/*****************		TASK 1 INIT		********************/
	T1_ReadDoorSensor_10MS.taskID				=		1	;
	T1_ReadDoorSensor_10MS.taskPriority		=			3	;
	T1_ReadDoorSensor_10MS.taskStackSize		=		512 ;
	T1_ReadDoorSensor_10MS.pTaskFcn			=		TASK_SYMBOL(T1_ReadDoorSensor_10MS) ;
	LOC_Error = MRTOS_voidCreateTask(&T1_ReadDoorSensor_10MS);
	if(LOC_Error != NoError)
		while(1);



	/*****************		TASK 2 INIT		********************/
	T2_DoorState_12MS.taskID				=		2	;
	T2_DoorState_12MS.taskPriority		=		3	;
	T2_DoorState_12MS.taskStackSize		=		512 ;
	T2_DoorState_12MS.pTaskFcn			=		TASK_SYMBOL(T2_DoorState_12MS) ;
	LOC_Error = MRTOS_voidCreateTask(&T2_DoorState_12MS);
	if(LOC_Error != NoError)
		while(1);
	/*****************		TASK 3 INIT		********************/
	T3_MainAlgo_15MS.taskID			=		3	;
	T3_MainAlgo_15MS.taskPriority		=		3	;
	T3_MainAlgo_15MS.taskStackSize		=		512 ;
	T3_MainAlgo_15MS.pTaskFcn			=		TASK_SYMBOL(T3_MainAlgo_15MS) ;
	LOC_Error = MRTOS_voidCreateTask(&T3_MainAlgo_15MS);
	if(LOC_Error != NoError)
		while(1);
	/*****************		TASK 4 INIT		********************/
	T4_LedState_18MS.taskID			=			4	;
	T4_LedState_18MS.taskPriority		=		3	;
	T4_LedState_18MS.taskStackSize		=		512 ;
	T4_LedState_18MS.pTaskFcn			=		TASK_SYMBOL(T4_LedState_18MS) ;
	LOC_Error = MRTOS_voidCreateTask(&T4_LedState_18MS);
	if(LOC_Error != NoError)
		while(1);


	/*****************		Active Tasks		*****************/
	LOC_Error = MRTOS_voidActiveTask(&T1_ReadDoorSensor_10MS);
	if(LOC_Error != NoError)
		while(1);
	LOC_Error = MRTOS_voidActiveTask(&T2_DoorState_12MS);
	if(LOC_Error != NoError)
		while(1);
	LOC_Error = MRTOS_voidActiveTask(&T3_MainAlgo_15MS);
	if(LOC_Error != NoError)
		while(1);
	LOC_Error = MRTOS_voidActiveTask(&T4_LedState_18MS);
	if(LOC_Error != NoError)
		while(1);



	/*****************		Start Scheduler		*****************/
	LOC_Error = MRTOS_voidStartScheduler();
	if(LOC_Error != NoError)
		while(1);

	while(1)
	{

	}


}


