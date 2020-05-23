include ../make.def

#why failed? -fpic?
CFLAGS=-g -O2 -O2  -DIN_GCC -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wno-format -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -fpic -mlong-double-80 -DUSE_ELF_SYMVER -g -DIN_LIBGCC2 -fbuilding-libgcc -fno-stack-protector   -fpic -mlong-double-80 -DUSE_ELF_SYMVER -I. -I. -I../gcc -I../libgcc -I./include -I../libgcc/config/libbid -DENABLE_DECIMAL_BID_FORMAT -DHAVE_CC_TLS  -DUSE_TLS -fvisibility=hidden -DHIDE_EXPORTS -I../gcc  -I./include -I../include -I../gcc/include-fixed/ 

#good
CFLAGS=-I../gcc -I./include -I../include -I../gcc/include-fixed/ -D IN_GCC -D USE_ELF_SYMVER -D IN_LIBGCC2 -D USE_ELF_SYMVER -D ENABLE_DECIMAL_BID_FORMAT -D HAVE_CC_TLS -D USE_TLS -D HIDE_EXPORTS 

#good
CFLAGS=-g -O2 -O2  -DIN_GCC -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wno-format -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -mlong-double-80 -DUSE_ELF_SYMVER -g -DIN_LIBGCC2 -fbuilding-libgcc -fno-stack-protector -mlong-double-80 -DUSE_ELF_SYMVER -I. -I. -I../gcc -I../libgcc -I./include -I../libgcc/config/libbid -DENABLE_DECIMAL_BID_FORMAT -DHAVE_CC_TLS  -DUSE_TLS -fvisibility=hidden -DHIDE_EXPORTS -I../gcc  -I./include -I../include -I../gcc/include-fixed/ 


CFLAGS_NOO2=-DIN_GCC -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wno-format -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -mlong-double-80 -DUSE_ELF_SYMVER -g -DIN_LIBGCC2 -fbuilding-libgcc -fno-stack-protector -mlong-double-80 -DUSE_ELF_SYMVER -I. -I. -I../gcc -I../libgcc -I./include -I../libgcc/config/libbid -DENABLE_DECIMAL_BID_FORMAT -DHAVE_CC_TLS  -DUSE_TLS -fvisibility=hidden -DHIDE_EXPORTS -I../gcc  -I./include -I../include -I../gcc/include-fixed/ 

XGCC=../gcc/xgcc
#SRCS=$(wildcard *.c)
#OBJS=$(patsubst %.c,%.o, $(SRCS))
OBJS_0=enable-execute-stack.o generic-morestack-thread.o generic-morestack.o 
OBJS_1=_muldi3.o _negdi2.o
OBJS_2=_lshrdi3.o _ashldi3.o _ashrdi3.o _cmpdi2.o _ucmpdi2.o _clear_cache.o _trampoline.o __main.o _absvsi2.o _absvdi2.o _addvsi3.o _addvdi3.o _subvsi3.o _subvdi3.o _mulvsi3.o _mulvdi3.o _negvsi2.o _negvdi2.o _ctors.o _ffssi2.o _ffsdi2.o _clz.o _clzsi2.o _clzdi2.o _ctzsi2.o _ctzdi2.o _popcount_tab.o _popcountsi2.o _popcountdi2.o _paritysi2.o _paritydi2.o _powisf2.o _powidf2.o _powixf2.o _powitf2.o _mulsc3.o _muldc3.o _mulxc3.o _multc3.o _divsc3.o _divdc3.o _divxc3.o _divtc3.o _bswapsi2.o _bswapdi2.o _clrsbsi2.o _clrsbdi2.o _fixunssfsi.o _fixunsdfsi.o _fixunsxfsi.o _fixsfdi.o _fixdfdi.o _fixxfdi.o _fixunssfdi.o _fixunsdfdi.o _fixunsxfdi.o _floatdisf.o _floatdidf.o _floatdixf.o _floatundisf.o _floatundidf.o _floatundixf.o _eprintf.o __gcc_bcmp.o _divdi3.o _moddi3.o _udivdi3.o _umoddi3.o _udiv_w_sdiv.o _udivmoddi4.o 
OBJS_3=bid_decimal_globals.o bid_decimal_data.o bid_binarydecimal.o bid_convert_data.o _isinfd32.o _isinfd64.o _isinfd128.o bid64_noncomp.o bid128_noncomp.o bid128_fma.o bid_round.o bid_from_int.o bid64_add.o bid128_add.o bid64_div.o bid128_div.o bid64_mul.o bid128_mul.o bid64_compare.o bid128_compare.o bid128.o bid32_to_bid64.o bid32_to_bid128.o bid64_to_bid128.o bid64_to_int32.o bid64_to_int64.o bid64_to_uint32.o bid64_to_uint64.o bid128_to_int32.o bid128_to_int64.o bid128_to_uint32.o bid128_to_uint64.o
OBJS_4=_addsub_sd.o _div_sd.o _mul_sd.o _eq_sd.o _ne_sd.o _lt_sd.o _gt_sd.o _le_sd.o _ge_sd.o _sd_to_si.o _sd_to_di.o _sd_to_usi.o _sd_to_udi.o _si_to_sd.o _di_to_sd.o _usi_to_sd.o _udi_to_sd.o _sd_to_sf.o _sd_to_df.o _sd_to_xf.o _sd_to_tf.o _sf_to_sd.o _df_to_sd.o _xf_to_sd.o _tf_to_sd.o _sd_to_dd.o _sd_to_td.o _unord_sd.o _addsub_dd.o _div_dd.o _mul_dd.o _eq_dd.o _ne_dd.o _lt_dd.o _gt_dd.o _le_dd.o _ge_dd.o _dd_to_si.o _dd_to_di.o _dd_to_usi.o _dd_to_udi.o _si_to_dd.o _di_to_dd.o _usi_to_dd.o _udi_to_dd.o _dd_to_sf.o _dd_to_df.o _dd_to_xf.o _dd_to_tf.o _sf_to_dd.o _df_to_dd.o _xf_to_dd.o _tf_to_dd.o _dd_to_sd.o _dd_to_td.o _unord_dd.o _addsub_td.o _div_td.o _mul_td.o _eq_td.o _ne_td.o _lt_td.o _gt_td.o _le_td.o _ge_td.o _td_to_si.o _td_to_di.o _td_to_usi.o _td_to_udi.o _si_to_td.o _di_to_td.o _usi_to_td.o _udi_to_td.o _td_to_sf.o _td_to_df.o _td_to_xf.o _td_to_tf.o _sf_to_td.o _df_to_td.o _xf_to_td.o _tf_to_td.o _td_to_sd.o _td_to_dd.o _unord_td.o 
OBJS_5=cpuinfo.o tf-signs.o sfp-exceptions.o addtf3.o divtf3.o eqtf2.o getf2.o letf2.o multf3.o negtf2.o subtf3.o unordtf2.o fixtfsi.o fixunstfsi.o floatsitf.o floatunsitf.o fixtfdi.o fixunstfdi.o floatditf.o floatunditf.o extendsftf2.o extenddftf2.o extendxftf2.o trunctfsf2.o trunctfdf2.o trunctfxf2.o enable-execute-stack.o generic-morestack.o generic-morestack-thread.o morestack.o
OBJS_5=cpuinfo.o sfp-exceptions.o
OBJS_6=tf-signs.o
OBJS_7=addtf3.o divtf3.o eqtf2.o getf2.o letf2.o multf3.o negtf2.o subtf3.o unordtf2.o fixtfsi.o fixunstfsi.o floatsitf.o floatunsitf.o fixtfdi.o fixunstfdi.o floatditf.o floatunditf.o extendsftf2.o extenddftf2.o extendxftf2.o trunctfsf2.o trunctfdf2.o trunctfxf2.o 
OBJS_8=morestack.o

GCC_EH_OBJS=emutls.o unwind-dw2.o unwind-dw2-fde-dip.o unwind-sjlj.o unwind-c.o


all: libgcc libgcc_eh


libgcc: prebuilt_1 prebuilt_2 prebuilt_3 prebuilt_4 prebuilt_5 prebuilt_6 prebuilt_7 prebuilt_8 prebuilt_0
	$(AR) libgcc.a $(OBJS_0) $(OBJS_1) $(OBJS_2) $(OBJS_3) $(OBJS_4) $(OBJS_5) $(OBJS_6) $(OBJS_7) $(OBJS_8)
	$(RANLIB) libgcc.a


clean:
	rm -f $(OBJS_0)
	rm -f $(OBJS_1)
	rm -f $(OBJS_2)
	rm -f $(OBJS_3)
	rm -f $(OBJS_4)
	rm -f $(OBJS_5)
	rm -f $(OBJS_6)
	rm -f $(OBJS_7)
	rm -f $(OBJS_8)
	rm -f $(GCC_EH_OBJS)
	rm -f libgcc.a libgcc_eh.a

prebuilt_0:
	@list='$(OBJS_0)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src=$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS)";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS);\
      fi;\
    done;

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

prebuilt_3:
	@list='$(OBJS_3)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L_"$$real;\
	  src="../libgcc/config/libbid/"$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS_NO) ";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2);\
      fi;\
    done;

prebuilt_4:
	@list='$(OBJS_4)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src="../libgcc/config/libbid/"$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS) -DFINE_GRAINED_LIBRARIES -D$$sym -DWIDTH=128 ";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS) -DFINE_GRAINED_LIBRARIES -D$$sym -DWIDTH=128;\
      fi;\
    done;

prebuilt_5:
	@list='$(OBJS_5)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src="../libgcc/config/i386/"$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS)";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS);\
      fi;\
    done;

prebuilt_6:
	@list='$(OBJS_6)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src="../libgcc/config/i386/32/"$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2)";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2);\
      fi;\
    done;

prebuilt_7:
	@list='$(OBJS_7)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src="../libgcc/soft-fp/"$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS)";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS);\
      fi;\
    done;

prebuilt_8:
	@list='$(OBJS_8)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src="../libgcc/config/i386/"$$real".S";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2) -xassembler-with-cpp -include morestack.vis";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2) -xassembler-with-cpp -include morestack.vis;\
      fi;\
    done;

libgcc_eh:
	@list='$(GCC_EH_OBJS)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="L"$$real;\
	  src=$$real".c";\
	  echo "$$src";\
	  echo "build $$obj   $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2)";\
      if [ ! -f $$obj ]; then \
         $(XGCC) -c $$src -o $$target $(CFLAGS_NOO2);\
      fi;\
    done;\
	$(AR) libgcc_eh.a $(GCC_EH_OBJS);\
	$(RANLIB) libgcc_eh.a;
