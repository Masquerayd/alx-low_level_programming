#!/bin/sh

# creating a script that will create a static library called liball.a from all the object files

# first we will convet all the .c files into object files

gcc -c *.c

# second we will create an archive called liball.a

ar rc liball.a *.o


