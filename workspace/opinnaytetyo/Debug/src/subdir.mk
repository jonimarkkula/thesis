################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../src/aeabi_romdiv_patch.s 

C_SRCS += \
../src/accelerometer.c \
../src/cr_startup_lpc11uxx.c \
../src/crp.c \
../src/ledSetup.c \
../src/main.c 

OBJS += \
./src/accelerometer.o \
./src/aeabi_romdiv_patch.o \
./src/cr_startup_lpc11uxx.o \
./src/crp.o \
./src/ledSetup.o \
./src/main.o 

C_DEPS += \
./src/accelerometer.d \
./src/cr_startup_lpc11uxx.d \
./src/crp.d \
./src/ledSetup.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M0 -D__USE_LPCOPEN -D__LPC11UXX__ -D__REDLIB__ -DDEBUG_ENABLE -DDEBUG_SEMIHOSTING -I"C:\Users\Markkula\Documents\LPCXpresso_8.2.2_650\workspace\CMSISv2p00_LPC11Uxx\inc" -I"C:\Users\Markkula\Documents\LPCXpresso_8.2.2_650\workspace\LPC11Uxx_Driver_Lib\inc" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m0 -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU Assembler'
	arm-none-eabi-gcc -c -x assembler-with-cpp -DDEBUG -D__CODE_RED -DCORE_M0 -D__USE_LPCOPEN -D__LPC11UXX__ -D__REDLIB__ -I"C:\Users\Markkula\Documents\LPCXpresso_8.2.2_650\workspace\CMSISv2p00_LPC11Uxx\inc" -I"C:\Users\Markkula\Documents\LPCXpresso_8.2.2_650\workspace\LPC11Uxx_Driver_Lib\inc" -g3 -mcpu=cortex-m0 -mthumb -D__REDLIB__ -specs=redlib.specs -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


