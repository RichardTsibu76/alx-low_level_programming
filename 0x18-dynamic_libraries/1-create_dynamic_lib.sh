#!/bin/bash
gcc *.c -o liball.so
gcc *.o -shared -o liball.so
