/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_SWC_IO_Abstraction_.c
 * Generated on: Wed Nov 8 13:59:41 MSK
 ********************************************************************/

#include "string.h"
#include "Rte_SWC_IO_Abstraction.h"


Rte_DE_uint8 ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading;


const Rte_CDS_SWC_IO_Abstraction Rte_Instance_SWC_IO_Abstraction = {
&ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading
};

const Rte_CDS_SWC_IO_Abstraction * const Rte_Inst_SWC_IO_Abstraction = &Rte_Instance_SWC_IO_Abstraction;




void Rte_IWrite_SWC_IO_Abstraction_ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading (uint8 VAR_u8sDoorSensorReading)
{
	(Rte_Inst_SWC_IO_Abstraction)->ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading->value = VAR_u8sDoorSensorReading;
}
uint8* Rte_IWriteRef_SWC_IO_Abstraction_ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading(void)
{
	return &(Rte_Inst_SWC_IO_Abstraction)->ReadDoorSensor_Runnable_PP_sDoorState_VAR_u8sDoorSensorReading->value;
}
