#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c main.c
ar -rcs liball.a *.o
