################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/main.cpp \
../src/myAlgorithms.cpp \
../src/myInsertSort.cpp \
../src/mySelectSort.cpp \
../src/test.cpp 

OBJS += \
./src/main.o \
./src/myAlgorithms.o \
./src/myInsertSort.o \
./src/mySelectSort.o \
./src/test.o 

CPP_DEPS += \
./src/main.d \
./src/myAlgorithms.d \
./src/myInsertSort.d \
./src/mySelectSort.d \
./src/test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


