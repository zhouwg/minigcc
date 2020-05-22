# History of minigcc

   as we know the basic pipeline in gcc as following:
          
          preprocess  ----> compile ----> assemble ----> link

   the earliest start-point of minigcc is came from my first PR in gcc community https://github.com/google/sanitizers/issues/407.
   
  
# Purpose of minigcc

   minigcc used to learning and research internal mechnism of gcc. 

# Pre-preparation  in x86-64 host(Ubuntu 18.04 x86-64, WSL x86-64, ...)
sudo apt-get install gcc-multilib g++-multilib 

sudo apt-get install zlib1g-dev

sudo apt-get install qemu-user-static

sudo update-binfmts --install i386 /usr/bin/qemu-i386-static --magic '\x7fELF\x01\x01\x01\x03\x00\x00\x00\x00\x00\x00\x00\x00\x03\x00\x03\x00\x01\x00\x00\x00' --mask '\xff\xff\xff\xff\xff\xff\xff\xfc\xff\xff\xff\xff\xff\xff\xff\xff\xf8\xff\xff\xff\xff\xff\xff\xff'

sudo service binfmt-support start

# How to build minigcc in Ubuntu 18.04.2

3.1)host dev env:

wgzhou:$ cat /etc/issue

Ubuntu 18.04.2 LTS \n \l

wgzhou:$ gcc -v

Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/7/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 7.4.0-1ubuntu1~18.04.1' --with-bugurl=file:///usr/share/doc/gcc-7/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++ --prefix=/usr --with-gcc-major-version-only --program-suffix=-7 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --enable-default-pie --with-system-zlib --with-target-system-zlib --enable-objc-gc=auto --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04.1)


3.2) checkout minigcc source code

wgzhou:$ git clone https://github.com/zhouwg/minigcc

3.3) built minigcc

wgzhou:$ cd minigcc


wgzhou:$ sudo make prebuild


wgzhou:$ make 


the cc1,cpp,xgcc,xg++ ... should be founded in directory gcc if everything is running ok as expected.

wgzhou:$ ./scripts/run_hello.sh

# License
This project is licensed under the Apache License.


# Status/Defect

   minigcc is under developent and only support target x86-ia32 currently. 
