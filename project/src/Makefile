COMMON_OBJECTS  = 
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#internal rules
CC		= msp430-elf-gcc
AS		= msp430-elf-as
AR		= msp430-elf-ar

all: src.elf

toy.elf: ${COMMON_OBJECTS} driver.c led.o buzzer.o switches.o stateMachines.o wdInterruptHandler.o ../lib/libTimer.a
	${CC} ${CFLAGS} -o $@ $^

load: src.elf
	msp430loader.sh src.elf

clean: 
	rm -f *.o *~ *# *.elf

stateMachines.o: led.h switches.h
