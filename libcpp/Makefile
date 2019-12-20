#author: Zhou Weiguo, zhouwg2000@gmail.com
include ../make.def

CFLAGS=-DHAVE_CONFIG_H -I. -I../mpc/src -I../ -I../gmp -I../mpfr/src -O2
CFLAGS=$(CCFLAGS) -I./ -I. -I../include -I./include -O2 -W -Wall -Wno-narrowing -Wwrite-strings -Wmissing-format-attribute -pedantic -Wno-long-long  -fno-exceptions -fno-rtti


SRCS=`find ./ -name "*.c" -print`
OBJS=charset.o directives.o directives-only.o errors.o expr.o files.o identifiers.o init.o lex.o line-map.o macro.o mkdeps.o pch.o symtab.o traditional.o

TARGET=libcpp.a

all:$(OBJS)
	$(AR) $(TARGET) $(OBJS)
	$(RANLIB) $(TARGET)


$(OBJS): %.o: %.c
	if [ ! -f $@ ]; then $(CXX) -c $(CFLAGS) $< -o $@; fi

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)
