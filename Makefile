#2017-10-27,zhou.weiguo
include make.def
SUBDIRS=mpfr/src mpc/src gmp zlib libdecnumber libiberty libcpp libbacktrace gcc

all: prebuild build



prebuild:
	@if [ ! -d ${AUX_DIR} ]; then \
		mkdir -p ${AUX_DIR}; \
	else \
		echo "${AUX_DIR} already exist"; \
	fi 
	@if [ ! -d ${AUX_GCC_DIR} ]; then \
			echo "${AUX_GCC_DIR} doesn't exist"; \
			xzcat ./misc/gcc-6.4.0-org.xz | tar -C ${AUX_DIR} -xf -;\
	else \
			echo "${AUX_GCC_DIR} already exist"; \
	fi 

build:
	make -C mpc/src
	make -C mpfr/src
	make -C gmp
	make -C zlib
	make -C libdecnumber
	make -C libiberty
	make -C libcpp
	make -C libbacktrace
	make -C gcc


clean:
	make -C mpc/src clean
	make -C mpfr/src clean
	make -C gmp clean
	make -C zlib clean
	make -C libdecnumber clean
	make -C libiberty clean
	make -C libcpp clean
	make -C libbacktrace clean
	make -C gcc clean

