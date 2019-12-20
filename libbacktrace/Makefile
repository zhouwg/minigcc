#author: Zhou Weiguo, zhouwg2000@gmail.com
include ../make.def

CFLAGS=-DHAVE_CONFIG_H -I. -I../mpc/src -I.. -I../gmp -I../mpfr/src -O2
CFLAGS=$(CCFLAGS) -DHAVE_CONFIG_H -I.  -I../include -I../libgcc -funwind-tables -frandom-seed=atomic.lo -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition -Wmissing-format-attribute -Wcast-qual -c


SRCS=`find ./ -name "*.c" -print`
OBJS=atomic.o dwarf.o fileline.o posix.o print.o sort.o state.o backtrace.o simple.o elf.o mmapio.o mmap.o

TARGET=libbacktrace.a

all:$(OBJS)
	$(AR) $(TARGET) $(OBJS)
	$(RANLIB) $(TARGET)


$(OBJS): %.o: %.c
	if [ ! -f $@ ]; then $(GCC) -c $(CFLAGS) $< -o $@; fi

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)
