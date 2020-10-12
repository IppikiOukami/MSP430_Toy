all: libTimer.a
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU}

#internal rules
CC		= msp430-elf-gcc
AS		= msp430-elf-gcc
AR		= msp430-elf-ar

libTimer.a: clockTimer.o sr.o
	$(AR) crs $A $^
	mc $^ ../h ../lib
	cp *.h ../h

clean:
	rm -f timerLib.a *.o *~ *#

install: libTimer.a
	mkdir -p
