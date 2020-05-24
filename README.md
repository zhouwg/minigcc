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


# How to contribute to minigcc
wgzhou:$ git clone [https://github.com/zhouwg/minigcc](https://github.com/zhouwg/minigcc)

wgzhou:$ cd minigcc

wgzhou:$ git checkout development

wgzhou:$ sudo make prebuild

wgzhou:$ make 


# License
This project is licensed under the Apache License.

# An interesting story about Open64

[鉴释科技]( http://www.xcalibyte.cn/ )创始人兼CEO梁宇宁曾在世界500强企业(包括三星、诺基亚、华为)和初创科技公司领导软件开发工作，拥有超过二十年的软件开发和管理经验.2014年加入华为,负责华为方舟编译器项目,2018年离职参与创立鉴释科技。

鉴释科技联合创始人兼CTO陈新中曾就职于英特尔中国研究院，主持开发先进移动平台核心技术，包括用于下一代使用模式、商务模式及相关影响的移动平台技术，以及辅助产品调整的相关技术等。 陈新中**自1981年起从事嵌入式系统工具的研发工作**。他于2008年加入英特尔中国研究院领导科技部-清华大学先进移动技术研究中心。在加入英特尔之前，**陈新中在SGI公司负责优化工具的研发，同时他还担任开源的Pro64编译器的总架构师**。在SGI工作之前，他**主持了Mips的动态共享对象的全局调度与优化项目**。陈新中拥有美国加州州立大学萨克拉门托分校舍的学士学位，以及美国普度大学计算机专业硕士。

鉴释科技联合创始人兼首席架构师刘新铭在开发和交付高性能计算系统(HPC)编译器和性能分析工具方面拥有数十年的丰富经验，他曾担任惠普 Java 编译器技术实验室主任，领导基于惠普安腾处理器的编译器开发工作。

华为编译器技术首席科学家周志德[Fred Chow](https://www.linkedin.com/in/fredchow/)2015年加入华为.周志德于1977-1983年在斯坦福读博，毕业后，周志德去了Daisy Systems，该公司是当时最知名的EDA创业公司之一。在Daisy Systems，周志德开发了DABL（一个类似VHDL的硬件设计语言）配套的编译器。周志德后来**陆续在MIPS和SGI任职**，**在SGI期间领衔开发了Pro64编译器，后来演化为著名的Open64编译器**。

2016年8月惠普宣布将[以约2.75亿美元收购超级计算机厂商SGI](http://world.xinhua08.com/a/20160814/1654828.shtml)。 

鉴释科技核心产品基于[Open64](http://www.spi-inc.org/projects/open64/)开发,方舟编译器也是基于[Open64](http://www.spi-inc.org/projects/open64/)开发?



# Status/Defect

   minigcc is under developent and only support target x86-ia32 currently. 
