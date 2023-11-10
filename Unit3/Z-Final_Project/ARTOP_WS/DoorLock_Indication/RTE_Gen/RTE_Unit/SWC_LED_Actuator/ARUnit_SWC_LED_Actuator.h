/********************************************************************
 * Automatically generated by ARUnit
 * Filename: ARUnit_SWC_LED_Actuator.h
 * Generated on: Wed Nov 8 13:59:41 MSK
 ********************************************************************/

#include "Rte_SWC_LED_Actuator.h"	

#ifndef ARUNIT_SWC_LED_ACTUATOR_H
#define ARUNIT_SWC_LED_ACTUATOR_H

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
DECLSPEC_EXPORT void ARUnit_Set_SWC_LED_Actuator_RP_sLED_OP_OP_setLedState_Delegate(FunctionPtr_SWC_LED_Actuator_RP_sLED_OP_OP_setLedState );
DECLSPEC_EXPORT void ARUnit_Call_SWC_LED_Actuator_RP_sLED_OP_OP_setLedState_ReturnCode(Std_ReturnType returnCode);

/***************************************/
/******** Flags API  *******************/
/***************************************/

/***************************************/
/******** Implicit API  ****************/
/***************************************/
DECLSPEC_EXPORT void ARUnit_IWrite_SWC_LED_Actuator_setLedState_Runnable_RP_LedState_VAR_u8LedState(uint8 VAR_u8LedState);
DECLSPEC_EXPORT uint8 ARUnit_IRead_SWC_LED_Actuator_setLedState_Runnable_RP_LedState_VAR_u8LedState(void);
DECLSPEC_EXPORT uint8* ARUnit_IWriteRef_SWC_LED_Actuator_setLedState_Runnable_RP_LedState_VAR_u8LedState(void);
/***************************************/
/******** Explicit API  ****************/
/***************************************/
/***************************************/
/******** Runnable Calls****************/
/***************************************/

DECLSPEC_EXPORT void ARUnit_Trigger_SWC_LED_Actuator_setLedState_Runnable(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ARUNIT_SWC_LED_ACTUATOR_H */
