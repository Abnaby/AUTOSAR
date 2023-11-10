################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MRTOS/src/MRTOS_Porting.c \
../MRTOS/src/MRTOS_Queue.c \
../MRTOS/src/MRTOS_Scheduler.c 

OBJS += \
./MRTOS/src/MRTOS_Porting.o \
./MRTOS/src/MRTOS_Queue.o \
./MRTOS/src/MRTOS_Scheduler.o 

C_DEPS += \
./MRTOS/src/MRTOS_Porting.d \
./MRTOS/src/MRTOS_Queue.d \
./MRTOS/src/MRTOS_Scheduler.d 


# Each subdirectory must supply rules for building sources it contributes
MRTOS/src/MRTOS_Porting.o: ../MRTOS/src/MRTOS_Porting.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MRTOS/src/MRTOS_Porting.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
MRTOS/src/MRTOS_Queue.o: ../MRTOS/src/MRTOS_Queue.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MRTOS/src/MRTOS_Queue.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
MRTOS/src/MRTOS_Scheduler.o: ../MRTOS/src/MRTOS_Scheduler.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MRTOS/src/MRTOS_Scheduler.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

