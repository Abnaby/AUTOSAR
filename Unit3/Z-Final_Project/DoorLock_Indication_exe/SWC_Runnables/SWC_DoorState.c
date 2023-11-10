/*
 * SWC_DoorState.c
 *
 *  Created on: Nov 8, 2023
 *      Author: Abnaby
 */


#include "Rte_SWC_DoorState.h"

/*****************************************************
 * Runnable: 	ReadDoorState_Runnable
 * Period:		0.012
 *****************************************************/
void ReadDoorState_Runnable(void)
{
	uint8 LOC_u8SensorReading ;
	// Read Door Sensor
	LOC_u8SensorReading = Rte_IRead_SWC_DoorState_ReadDoorState_Runnable_RP_sDoorState_VAR_u8sDoorSensorReading();
	// Send Sensor Reading to SWC_DoorLockIndicatorAlgo
	Rte_IWrite_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState(LOC_u8SensorReading);
}
