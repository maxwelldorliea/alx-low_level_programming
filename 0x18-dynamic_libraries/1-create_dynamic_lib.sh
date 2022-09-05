#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -c -fPIC
gcc *.o -shared -o liball.so
