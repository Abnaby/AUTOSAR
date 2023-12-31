/********************************************************************
 * Automatically generated by ARUnit
 * Filename: ARUnit_SWC_DoorState.h
 * Generated on: Wed Nov 8 14:0:37 MSK
 ********************************************************************/

#include "Rte_SWC_DoorState.h"	

#ifndef ARUNIT_SWC_DOORSTATE_H
#define ARUNIT_SWC_DOORSTATE_H

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
DECLSPEC_EXPORT void ARUnit_IWrite_SWC_DoorState_ReadDoorState_Runnable_PP_DoorState_VAR_u8DoorState(uint8 VAR_u8DoorState);
DECLSPEC_EXPORT uint8 ARUnit_IRead_SWC_DoorState_ReadDoorState_Runnable_PP_DoorState_VAR_u8DoorState(void);
DECLSPEC_EXPORT uint8* ARUnit_IWriteRef_SWC_DoorState_ReadDoorState_Runnable_PP_DoorState_VAR_u8DoorState(void);
DECLSPEC_EXPORT void ARUnit_IWrite_SWC_DoorState_ReadDoorState_Runnable_RP_sDoorState_VAR_u8sDoorSensorReading(uint8 VAR_u8sDoorSensorReading);
DECLSPEC_EXPORT uint8 ARUnit_IRead_SWC_DoorState_ReadDoorState_Runnable_RP_sDoorState_VAR_u8sDoorSensorReading(void);
DECLSPEC_EXPORT uint8* ARUnit_IWriteRef_SWC_DoorState_ReadDoorState_Runnable_RP_sDoorState_VAR_u8sDoorSensorReading(void);
/***************************************/
/******** Explicit API  ****************/
/***************************************/
/***************************************/
/******** Runnable Calls****************/
/***************************************/

DECLSPEC_EXPORT void ARUnit_Trigger_SWC_DoorState_ReadDoorState_Runnable(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ARUNIT_SWC_DOORSTATE_H */
