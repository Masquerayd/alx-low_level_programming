#include "main.h"
#include <stdio.h>
/**
  *puts_half - prints every other string
  *
  *@s: char* s
  *Return: nothing
  */

void puts_half(char *s)
{
	int max = 0;
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}




	while (*(s + max) != '\0')
	{
		if (max >= (len / 2))
		{
			_putchar(*(s + max));
		}
		max++;
	}
	_putchar('\n');
}
