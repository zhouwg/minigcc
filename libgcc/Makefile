#author: Zhou Weiguo, zhouwg2000@gmail.com
include ../make.def

#why failed? -fpic?
CFLAGS=-g -O2 -O2  -DIN_GCC -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wno-format -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -fpic -mlong-double-80 -DUSE_ELF_SYMVER -g -DIN_LIBGCC2 -fbuilding-libgcc -fno-stack-protector   -fpic -mlong-double-80 -DUSE_ELF_SYMVER -I. -I. -I../gcc -I../libgcc -I./include -I../libgcc/config/libbid -DENABLE_DECIMAL_BID_FORMAT -DHAVE_CC_TLS  -DUSE_TLS -fvisibility=hidden -DHIDE_EXPORTS -I../gcc  -I./include -I../include -I../gcc/include-fixed/ 

#good
CFLAGS=-I../gcc -I./include -I../include -I../gcc/include-fixed/ -D IN_GCC -D USE_ELF_SYMVER -D IN_LIBGCC2 -D USE_ELF_SYMVER -D ENABLE_DECIMAL_BID_FORMAT -D HAVE_CC_TLS -D USE_TLS -D HIDE_EXPORTS 

#good
CFLAGS=-g -O2 -O2  -DIN_GCC -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wno-format -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -mlong-double-80 -DUSE_ELF_SYMVER -g -DIN_LIBGCC2 -fbuilding-libgcc -fno-stack-protector -mlong-double-80 -DUSE_ELF_SYMVER -I. -I. -I../gcc -I../libgcc -I./include -I../libgcc/config/libbid -DENABLE_DECIMAL_BID_FORMAT -DHAVE_CC_TLS  -DUSE_TLS -fvisibility=hidden -DHIDE_EXPORTS -I../gcc  -I./include -I../include -I../gcc/include-fixed/ 

XGCC=../gcc/xgcc
#SRCS=$(wildcard *.c)
#OBJS=$(patsubst %.c,%.o, $(SRCS))

OBJS_1=_muldi3.o _negdi2.o
OBJS_2=_lshrdi3.o _ashldi3.o _ashrdi3.o _cmpdi2.o _ucmpdi2.o _clear_cache.o _trampoline.o __main.o _absvsi2.o _absvdi2.o _addvsi3.o _addvdi3.o _subvsi3.o _subvdi3.o _mulvsi3.o _mulvdi3.o _negvsi2.o _negvdi2.o _ctors.o _ffssi2.o _ffsdi2.o _clz.o _clzsi2.o _clzdi2.o _ctzsi2.o _ctzdi2.o

TARGET=libgcc.a

$(OBJS): %.o: %.c
	if [ ! -f $@ ]; then $(GCC) -c $(CFLAGS) $< -o $@; fi

all: prebuilt_1 prebuilt_2
	$(AR) $(TARGET) $(OBJS_1) $(OBJS_2)
	$(RANLIB) $(TARGET)


clean:
	rm -f $(OBJS)
	rm -f $(OBJS_1)
	rm -f $(OBJS_2)
	rm -f $(TARGET)


prebuilt_1:
	@list='$(OBJS_1)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  echo "build $$obj   $(XGCC) -c libgcc2.c -o $$target $(CFLAGS) -D$$sym";\
      if [ ! -f $$obj ]; then \
	  	$(XGCC) -c libgcc2.c -o $$target $(CFLAGS) -D$$sym;\
	  fi;\
	done;

prebuilt_2:
	@list='$(OBJS_2)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L_"$$real;\
	  echo "build $$obj   $(XGCC) -c libgcc2.c -o $$target $(CFLAGS) -D$$sym";\
      if [ ! -f $$obj ]; then \
	  	$(XGCC) -c libgcc2.c -o $$target $(CFLAGS) -D$$sym;\
	  fi;\
	done;
