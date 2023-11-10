/*
 * SWC_LED_Actuator.c
 *
 *  Created on: Nov 8, 2023
 *      Author: Abnaby
 */


#include "Rte_SWC_LED_Actuator.h"

/*****************************************************
 * Runnable: 	setLedState_Runnable
 * Period:		0.018
 *****************************************************/
 void setLedState_Runnable(void)
 {
	 uint8 LOC_u8GetLedState ;
	 // RTE Read
	 LOC_u8GetLedState = Rte_IRead_SWC_LED_Actuator_setLedState_Runnable_RP_LedState_VAR_u8LedState();

	 // RTE Call Operation
	 Rte_Call_RP_sLED_OP_OP_setLedState(!LOC_u8GetLedState);
 }
