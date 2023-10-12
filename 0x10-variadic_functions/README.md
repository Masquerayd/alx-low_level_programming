# Variadic Functions

## This is a short readme file on variadic functions and how to use them 

Variadic functions are functions which have a variable number of argumernts and are declared as a $Ellipssis$ (...) in in place of the last parameter E.G.

```c
	int check( int a , double b, ...);
```

The are $stdarg.h$ types that can be used:

+ va_list - types for iterating arguments.
* va_start - Retrieve an argument.
* va_end - free a va_list.
- va_start - Start iterating arguments with a va_list.

**NOTE:** Variadic functions need more than one argument otherwise the function wont work.

Lets look at example code of how variadic functions are used.

```c
#include <stdio.h>
#include <stdarg.h>

/* print all args one at a time until a negative argument is seenn; all args are assemed to be of int type*/

void printargs(int arg1, ...)
{
	va_list ap; /* This creates a varible that is used for iterating arguments */
	int i;

	va_start(ap, arg1); /* This starts the iteration procress from the first argumets */
	for (i = arg1; i >= 0; i = va_arg(ap, int)) 
		printf("%d ", i);
	va_end(ap):
	putchar('\n');
}

int main(void)
{
	printargs(4, 12, 43);
	printargs(84, 76, --1);
	print args(-1);
}

```
This program will print the following:

```
4 12 43
84 76
```

**NOTE:** This program does not print negative arguments that were passed into the function.

