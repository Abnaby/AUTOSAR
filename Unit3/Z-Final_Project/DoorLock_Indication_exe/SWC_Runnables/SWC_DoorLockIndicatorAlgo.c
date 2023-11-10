
/*
 * DoorLockIndicatorAlgo
 *
 *  Created on: Nov 8, 2023
 *      Author: Abnaby
 */


#include "Rte_SWC_DoorLockIndicatorAlgo.h"

/*****************************************************
 * @brief: 	System States
 *****************************************************/
#define LED_OFF		(uint8)0
#define LED_ON		(uint8)1
#define DOOR_CLSD	(uint8)0
#define DOOR_OPND	(uint8)1

/*****************************************************
 * Runnable: 	DoorLock_Indicator_Runnable
 * Period:		0.015 s
 *****************************************************/
void DoorLock_Indicator_Runnable(void)
{
	uint8 LOC_u8DoorState = DOOR_CLSD ;
	// Get Door State
	LOC_u8DoorState = Rte_IRead_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState();
	// Main Algo
	if(LOC_u8DoorState == DOOR_CLSD)
	{
		// Turn-Off LED
		Rte_IWrite_SWC_DoorState_ReadDoorState_Runnable_PP_DoorState_VAR_u8DoorState(LED_OFF);
	}
	else if(LOC_u8DoorState == DOOR_OPND)
	{
		// Turn-on LED
		Rte_IWrite_SWC_DoorState_ReadDoorState_Runnable_PP_DoorState_VAR_u8DoorState(LED_ON);
	}
	else
	{
		// <!TODO> Error in Door State
	}
}
