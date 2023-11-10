################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/GPIO_program.c \
../Src/NVIC_program.c \
../Src/PSRC_program.c \
../Src/RCC_program.c \
../Src/SCB_program.c \
../Src/STK_program.c \
../Src/main.c 

OBJS += \
./Src/GPIO_program.o \
./Src/NVIC_program.o \
./Src/PSRC_program.o \
./Src/RCC_program.o \
./Src/SCB_program.o \
./Src/STK_program.o \
./Src/main.o 

C_DEPS += \
./Src/GPIO_program.d \
./Src/NVIC_program.d \
./Src/PSRC_program.d \
./Src/RCC_program.d \
./Src/SCB_program.d \
./Src/STK_program.d \
./Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/GPIO_program.o: ../Src/GPIO_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/GPIO_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/NVIC_program.o: ../Src/NVIC_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/NVIC_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/PSRC_program.o: ../Src/PSRC_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/PSRC_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/RCC_program.o: ../Src/RCC_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/RCC_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/SCB_program.o: ../Src/SCB_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/SCB_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/STK_program.o: ../Src/STK_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/STK_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/main.o: ../Src/main.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_Gen" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/RTE/RTE_HeaderFiles" -I"C:/Users/Abnaby/STM32CubeIDE/workspace_1.4.0/DoorLock_Indication/MRTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

