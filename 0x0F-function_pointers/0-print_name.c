#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - takes in a functions a uses it to print
 * @name: the name to print
 * @f: the function that will print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL|| f == NULL)
	{
		return;
	}
	f(name);
}

