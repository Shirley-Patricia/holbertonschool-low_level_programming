#/bin/bash
cc -fPIC -c *.c
ar rc liball.a *.o
ranlib liball.a