################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SWC_Runnables/SWC_DoorLockIndicatorAlgo.c \
../SWC_Runnables/SWC_DoorState.c \
../SWC_Runnables/SWC_IO_Abstraction.c \
../SWC_Runnables/SWC_LED_Actuator.c 

OBJS += \
./SWC_Runnables/SWC_DoorLockIndicatorAlgo.o \
./SWC_Runnables/SWC_DoorState.o \
./SWC_Runnables/SWC_IO_Abstraction.o \
./SWC_Runnables/SWC_LED_Actuator.o 

C_DEPS += \
./SWC_Runnables/SWC_DoorLockIndicatorAlgo.d \
./SWC_Runnables/SWC_DoorState.d \
./SWC_Runnables/SWC_IO_Abstraction.d \
./SWC_Runnables/SWC_LED_Actuator.d 


# Each subdirectory must supply rules for building sources it contributes
SWC_Runnables/SWC_DoorLockIndicatorAlgo.o: ../SWC_Runnables/SWC_DoorLockIndicatorAlgo.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"SWC_Runnables/SWC_DoorLockIndicatorAlgo.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
SWC_Runnables/SWC_DoorState.o: ../SWC_Runnables/SWC_DoorState.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"SWC_Runnables/SWC_DoorState.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
SWC_Runnables/SWC_IO_Abstraction.o: ../SWC_Runnables/SWC_IO_Abstraction.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"SWC_Runnables/SWC_IO_Abstraction.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
SWC_Runnables/SWC_LED_Actuator.o: ../SWC_Runnables/SWC_LED_Actuator.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"SWC_Runnables/SWC_LED_Actuator.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

