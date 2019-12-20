#!/bin/sh
cd ./gcc
./xgcc -c -fdump-tree-cfg=out ./testsuite/hello.c

./xgcc -v -o hello ./testsuite/hello.c

cd -
