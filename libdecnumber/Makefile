#author: Zhou Weiguo, zhouwg2000@gmail.com
include ../make.def

CFLAGS=-DHAVE_CONFIG_H  -I../mpc/src -I.. -I../gmp -I../mpfr/src -O2
CFLAGS=$(CCFLAGS) -I. -I./  -g -O2 -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition -Wmissing-format-attribute -Wcast-qual -pedantic -Wno-long-long


SRCS=`find ./ -name "*.c" -print`
OBJS=decNumber.o decContext.o bid/decimal32.o bid/decimal64.o bid/decimal128.o bid/bid2dpd_dpd2bid.o bid/host-ieee32.o bid/host-ieee64.o bid/host-ieee128.o

TARGET=libdecnumber.a

all:$(OBJS)
	$(AR) $(TARGET) $(OBJS)
	$(RANLIB) $(TARGET)


$(OBJS): %.o: %.c
	if [ ! -f $@ ]; then $(GCC) -c $(CFLAGS) $< -o $@; fi

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)
