#author: Zhou Weiguo, zhouwg2000@gmail.com

include ../../make.def

CFLAGS=$(CCFLGAS) -std=gnu99 -DHAVE_CONFIG_H -I. -I../../gmp/scanf -I.. -I. -D__GMP_WITHIN_GMP -I../../gmp -O2 -c

SRCS=`find ./ -name "*.c" -print`
OBJS=doscan.o fscanf.o fscanffuns.o scanf.o sscanf.o sscanffuns.o vfscanf.o vscanf.o vsscanf.o

TARGET=libscanf.a
vpath %.c mpf
vpath %.c mpz
vpath %.c mpn
vpath %.c mpq

all:$(OBJS)
	$(AR) $(TARGET) $(OBJS)


%.o: %.c
	if [ ! -f $@ ]; then $(GCC) -c $(CFLAGS) $< -o $@; fi

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)
