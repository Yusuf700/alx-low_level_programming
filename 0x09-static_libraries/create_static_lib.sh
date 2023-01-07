#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rs liball.o *.c
ranlib liball.a 
