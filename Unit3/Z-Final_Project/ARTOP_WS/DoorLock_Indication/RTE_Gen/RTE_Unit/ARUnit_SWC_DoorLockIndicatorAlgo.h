/********************************************************************
 * Automatically generated by ARUnit
 * Filename: ARUnit_SWC_DoorLockIndicatorAlgo.h
 * Generated on: Wed Nov 8 14:0:37 MSK
 ********************************************************************/

#include "Rte_SWC_DoorLockIndicatorAlgo.h"	

#ifndef ARUNIT_SWC_DOORLOCKINDICATORALGO_H
#define ARUNIT_SWC_DOORLOCKINDICATORALGO_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef false
    #define false (0)
#endif
#ifndef true
    #define true  (!false)
#endif


void ARUnit_Initialize ();

/***************************************/
/******** Delegates API  ***************/
/***************************************/

/***************************************/
/******** Flags API  *******************/
/***************************************/

/***************************************/
/******** Implicit API  ****************/
/***************************************/
DECLSPEC_EXPORT void ARUnit_IWrite_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState(uint8 VAR_u8LedState);
DECLSPEC_EXPORT uint8 ARUnit_IRead_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState(void);
DECLSPEC_EXPORT uint8* ARUnit_IWriteRef_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_PP_LedState_VAR_u8LedState(void);
DECLSPEC_EXPORT void ARUnit_IWrite_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState(uint8 VAR_u8DoorState);
DECLSPEC_EXPORT uint8 ARUnit_IRead_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState(void);
DECLSPEC_EXPORT uint8* ARUnit_IWriteRef_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable_RP_DoorState_VAR_u8DoorState(void);
/***************************************/
/******** Explicit API  ****************/
/***************************************/
/***************************************/
/******** Runnable Calls****************/
/***************************************/

DECLSPEC_EXPORT void ARUnit_Trigger_SWC_DoorLockIndicatorAlgo_DoorLock_Indicator_Runnable(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ARUNIT_SWC_DOORLOCKINDICATORALGO_H */