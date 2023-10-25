#include "function_pointers.h"

/**
 * print_name - print the name using two types of functions
 * @name: name to be printed
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
	{
		return;
	}
	(*f)(name);
}


