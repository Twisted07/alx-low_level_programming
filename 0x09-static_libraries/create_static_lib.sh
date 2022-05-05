#!/bin/bash
gcc -Wall -Werror -pendatic -Wextra -c *.c
ar rc liball.a *.o
