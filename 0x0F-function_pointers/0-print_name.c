#include "main.h"
#include <stdio.h>
/**
 * print_name - prints message with the input name
 * @name: input name
 * @f: a pointer function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
