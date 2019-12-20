#!/bin/sh
cd ./gcc
./xgcc -v -o hello ./testsuite/hello.c

cd -
