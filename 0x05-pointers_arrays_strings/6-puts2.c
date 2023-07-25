#include "main.h"
#include <stdio.h>
/**
  *puts2 - prints every other string
  *
  *@s: char* s
  *Return: nothing
  */

void puts2(char *s)
{
	int max = 0;
	int b = 0;

	while (*(s + max) != '\0')
	{
		if ((max % 2) == 0)
		{
			_putchar(*(s + max));
			b++;
		}
		max++;

	}
	_putchar('\n');
}
