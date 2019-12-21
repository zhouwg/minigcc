#2017-10-27,zhou.weiguo, zhouwg2000@gmail.com
include make.def

SUBDIRS 	 = mpc/src mpfr/src gmp zlib libdecnumber libiberty libcpp libbacktrace gcc
DIST_SUBDIRS = $(SUBDIRS)

all: prebuild all-recursive 


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




clean-generic:

clean: clean-recursive
	
clean-am: clean-generic


check-am: all-am
all-am: Makefile

install:
	make clean;

.PHONY: $(RECURSIVE_TARGETS) all  clean 

RECURSIVE_TARGETS = all-recursive  clean-recursive

clean-recursive:
	@set fnord $$MAKEFLAGS; amf=$$2; \
	dot_seen=no; \
	case "$@" in \
	  distclean-* | maintainer-clean-*) list='$(DIST_SUBDIRS)' ;; \
	  *) list='$(SUBDIRS)' ;; \
	esac; \
	rev=''; for subdir in $$list; do \
	  if test "$$subdir" = "."; then :; else \
	    rev="$$subdir $$rev"; \
	  fi; \
	done; \
	rev="$$rev ."; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"



$(RECURSIVE_TARGETS):
	@set fnord $$MAKEFLAGS; amf=$$2; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"
