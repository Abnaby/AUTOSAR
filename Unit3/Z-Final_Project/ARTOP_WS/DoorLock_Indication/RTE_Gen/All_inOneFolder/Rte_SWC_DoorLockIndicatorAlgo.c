/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_SWC_DoorLockIndicatorAlgo_.c
 * Generated on: Wed Nov 8 14:0:37 MSK
 ********************************************************************/

#include "string.h"
#include "Rte_SWC_DoorLockIndicatorAlgo.h"


Rte_DE_uint8 DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState;
Rte_DE_uint8 DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState;


const Rte_CDS_SWC_DoorLockIndicatorAlgo Rte_Instance_SWC_DoorLockIndicatorAlgo = {
&DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState,
&DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState
};

const Rte_CDS_SWC_DoorLockIndicatorAlgo * const Rte_Inst_SWC_DoorLockIndicatorAlgo = &Rte_Instance_SWC_DoorLockIndicatorAlgo;




void Rte_IWrite_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState (uint8 VAR_u8LedState)
{
	(Rte_Inst_SWC_DoorLockIndicatorAlgo)->DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState->value = VAR_u8LedState;
}
uint8* Rte_IWriteRef_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState(void)
{
	return &(Rte_Inst_SWC_DoorLockIndicatorAlgo)->DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState->value;
}
uint8 Rte_IRead_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState (void)
{
	return (Rte_Inst_SWC_DoorLockIndicatorAlgo)->DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState->value;
}