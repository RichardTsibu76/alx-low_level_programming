#!/bin/bash
gcc *.c -fpic liball.so && gcc *.o -shared -o liball.so
