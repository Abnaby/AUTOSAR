/*
 * SWC_IO_Abstraction.c
 *
 *  Created on: Nov 8, 2023
 *      Author: Abnaby
 */

#include "Rte_SWC_IO_Abstraction.h"
#include "COMMON.h"

#define LED_OFF		(uint8)0
#define LED_ON		(uint8)1
/*****************************************************
 * @brief: 	Pinout
 *****************************************************/
#define CHANNEL_1	PORTA,PIN3	// switch
#define CHANNEL_2	PORTA,PIN7	// LED


/*****************************************************
 * Runnable: 	ReadDoorSensor_Runnable
 * Period:		0.01
 *****************************************************/
void ReadDoorSensor_Runnable(void)
{
	uint8 LOC_u8SensorVal ;
	//Read Sensor <!TODO> Warning Used noncomplinet autosar function
	LOC_u8SensorVal = GPIO_u8GetPinValue(CHANNEL_1);
	//RTE Write Sensor Val
	Rte_IWrite_SWC_IO_Abstraction_ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading(LOC_u8SensorVal);
}

/*****************************************************
 * Port: 		PP_sLED_OP
 * Interface:	CS_IF_Set_LED_State
 * Operation:	OP_setLedState
 *****************************************************/
Std_ReturnType LedSwitch_Runnable(uint8 ARG_u8LedState)
{
	Std_ReturnType LOC_ErrorState ;
	if(ARG_u8LedState == LED_ON)
	{
		GPIO_voidSetPinValue(CHANNEL_2, HIGH);
		LOC_ErrorState = E_OK ;
	}
	else if (ARG_u8LedState == LED_OFF)
	{
		GPIO_voidSetPinValue(CHANNEL_2, LOW);
		LOC_ErrorState = E_OK ;
	}
	else
	{
		LOC_ErrorState = E_NOT_OK ;
	}
	return LOC_ErrorState ;
}
