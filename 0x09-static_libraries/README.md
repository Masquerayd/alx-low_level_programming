#Building C libraries

A 'Library' is a file that contains several object files. Using these Labraries it makes it easier  for the compiler to find functions , variables and so on.


There are two types of libraries 

1. Static Libraries - are just collection of object files that are linked into the program during th e linking phase.
1. Shared Libraries - are shared by all programs, in stead of compiling all the object files into the executable it checks if the files exisit in a shared library and them complies them into the program, without the files the program would not compile.(But the shared library has to have the files inorder for the program to compile).

## Creating C libraries 

To create a 'Static Library ', we are going to use a program called the '**Archiver**'. The code below shows the how we can create a archive called 'libutil,a' with two object files called 'util_file.o' 'util_net.o'.

```
	ar rc libutila.a util_file.o util_net.o
```

1. **ar** - Tells the compiler to create a archiver from the two object files and if there is already a archive called 'libutil.a' it tells the compiler to overwite it.


