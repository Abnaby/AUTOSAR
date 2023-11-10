################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTE/RTE_Gen/Rte_SWC_DoorLockIndicatorAlgo.c \
../RTE/RTE_Gen/Rte_SWC_DoorState.c \
../RTE/RTE_Gen/Rte_SWC_IO_Abstraction.c \
../RTE/RTE_Gen/Rte_SWC_LED_Actuator.c 

OBJS += \
./RTE/RTE_Gen/Rte_SWC_DoorLockIndicatorAlgo.o \
./RTE/RTE_Gen/Rte_SWC_DoorState.o \
./RTE/RTE_Gen/Rte_SWC_IO_Abstraction.o \
./RTE/RTE_Gen/Rte_SWC_LED_Actuator.o 

C_DEPS += \
./RTE/RTE_Gen/Rte_SWC_DoorLockIndicatorAlgo.d \
./RTE/RTE_Gen/Rte_SWC_DoorState.d \
./RTE/RTE_Gen/Rte_SWC_IO_Abstraction.d \
./RTE/RTE_Gen/Rte_SWC_LED_Actuator.d 


# Each subdirectory must supply rules for building sources it contributes
RTE/RTE_Gen/Rte_SWC_DoorLockIndicatorAlgo.o: ../RTE/RTE_Gen/Rte_SWC_DoorLockIndicatorAlgo.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/SWC_Runnables" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"RTE/RTE_Gen/Rte_SWC_DoorLockIndicatorAlgo.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
RTE/RTE_Gen/Rte_SWC_DoorState.o: ../RTE/RTE_Gen/Rte_SWC_DoorState.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/SWC_Runnables" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"RTE/RTE_Gen/Rte_SWC_DoorState.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
RTE/RTE_Gen/Rte_SWC_IO_Abstraction.o: ../RTE/RTE_Gen/Rte_SWC_IO_Abstraction.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/SWC_Runnables" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"RTE/RTE_Gen/Rte_SWC_IO_Abstraction.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
RTE/RTE_Gen/Rte_SWC_LED_Actuator.o: ../RTE/RTE_Gen/Rte_SWC_LED_Actuator.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/SWC_Runnables" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"RTE/RTE_Gen/Rte_SWC_LED_Actuator.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

