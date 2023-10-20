#include <stdio.h>
#include "main.h"

/**
 * printstr - prints the string
 * @str: string to be printed
 * Return: nothing
 */

void printstr(const char *str)
{
	if (str == NULL)
	{
		printf("[0] (nil)");
	}
	else{

		printf("%s", str);
	}


}
