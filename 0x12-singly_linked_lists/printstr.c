#include <stdio.h>
#include "lists.h"

/**
 * printstr - prints the string
 * @str: string to be printed
 * Return: nothing
 */

void printstrnlen(const char *str, unsigned int len)
{
	if (str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", len, str);
	}
}
