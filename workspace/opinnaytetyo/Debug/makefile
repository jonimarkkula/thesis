################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: opinnaytetyo.axf

# Tool invocations
opinnaytetyo.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\Users\Markkula\Documents\LPCXpresso_8.2.2_650\workspace\CMSISv2p00_LPC11Uxx\Debug" -L"C:\Users\Markkula\Documents\LPCXpresso_8.2.2_650\workspace\LPC11Uxx_Driver_Lib\Debug" -Xlinker -Map="opinnaytetyo.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -mcpu=cortex-m0 -mthumb -T "opinnaytetyo_Debug.ld" -o "opinnaytetyo.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) opinnaytetyo.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "opinnaytetyo.axf"; # arm-none-eabi-objcopy -v -O binary "opinnaytetyo.axf" "opinnaytetyo.bin" ; # checksum -p LPC11U14_201 -d "opinnaytetyo.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
