/**
* @file MRTOS_Porting.h
* @author Mohamed Abd El-Naby (mahameda.naby@gmail.com) 
* @brief this file consist of some of APIs that controls and hold CPU registers
* @version 1.5
* @date 2023-05-28
*
*/


#ifndef INC_MRTOS_PORTING_H_
#define INC_MRTOS_PORTING_H_




/******************************************************************************
* User Preprocessor Options
 *******************************************************************************/
/**
 * @brief Choose one of 
 *                      CORTEX_M3 
 *                      CORTEX_M4 
 *                      
 */
#define __CPU__     CORTEX_M3

/**
 * @brief Write down maximum number of tasks
 *
 */
#define MAX_NUM_OF_TASKS	6

/**
 * @brief This Macro is used to define the tick time in microsecond 
 * 
 */
#define TICK_TIME (u32)1000

/**
 * @brief This Macro is used to define the SIZE of main stack area
 * @details This area is used by Kernel, Interrupts, and Exceptions
 *
 */
#define MainStackSize   2072

/**
 * @brief This Macro is used to define the handler name of pendSV
 *
 */
#define PEND_SV_HANDLER_NAME    PendSV_Handler


/**
 * @brief This Macro is used to define symbol of end of stack
 *
 */
#define END_OF_STACK_SYMBOL	_estack

/**
 * @brief This Macro is used to define symbol of end of heap
 *
 */
#define END_OF_HEAP_SYMBOL	_eheap

/**
 * @brief This Macro is used to Enable Queue
 *
 */
#define ENABLE_QUEUE_MSG_BOX 		0

#if ENABLE_QUEUE_MSG_BOX == 1

	/**
	 * @brief This Macro is used to define MAX size of Queue for data synch
	 *
	 */
	#define MAX_QUEUE_MSG_SIZE			0
#endif
/**
 * @brief This Macro is used to Enable Binary Semaphore
 *
 */
#define ENABLE_BINARY_SAMPHORE				0
/**
 * @brief This Macro is used to Enable Counting Semaphore
 *
 */
#define ENABLE_COUNTING_SAMPHORE			0

/**
 * @brief This Macro is used to Enable mutual exclusion (MUTEX)
 *
 */
#define ENABLE_MUTEX			0


/******************************************************************************
*  Preprocessor Constants
 *******************************************************************************/

/**
 * @brief This Macro is used to inline function
 *
 */
# define FORCE_INLINE __attribute__((always_inline)) inline
/******************************************************************************
* Variables
*******************************************************************************/

/**
 * @brief This Symbol is defined for the top of stack defined by linkerscript (.ld) File
 * 
 */
extern int END_OF_STACK_SYMBOL ;
/**
 * @brief This Symbol is defined for the top of heap defined by linkerscript (.ld) File
 * 
 */
extern int END_OF_HEAP_SYMBOL  ;

/******************************************************************************
* Includes
*******************************************************************************/

#if (__CPU__ == CORTEX_M3) ||( __CPU__ == CORTEX_M4)
#include "../Inc/PSRC_interface.h"			// Include Processor Libraries
#include "../Inc/STK_interface.h"			// Include Systic
#include "../Inc/SCB_interface.h"			// For Trig PendSV
#include "../Inc/NVIC_interface.h"			// To Set Priority of IRQs
#include "../Inc/SCB_interface.h"			// For Trig PendSV
#include "../Inc/PSRC_interface.h"			// Include Processor Libraries


#else
    #error "Undefined CPU."
#endif



/******************************************************************************
* Typedefs
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/

/**
 * @brief This Function is used to initialize the HW.
 * @details This Function Will initialize some of HW like systick timer.
 * @param  void
 * @return void
 */
void MRTOS_voidHardwareInit(void);

/**
 * @brief This Function is used to make SVC calls.
 * @details Just Edit SVC assembly code.
 * @param  void
 * @return MRTOS_ErrorID return one of @ref MRTOS_ErrorID
 */
void MRTOS_voidCallService(u8 copy_u8ServiceID);

/**
 * @brief This Function is used to initialize the start the ticker.
 * @param  void
 * @return callBack pointer to scheduler.
 */
void MRTOS_voidStartTicker(void (*callBack)(void));


/******************************************************************************
* Configuration Constants
*******************************************************************************/


#endif /* INC_MRTOS_PORTING_H_ */
