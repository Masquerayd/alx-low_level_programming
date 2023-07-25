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
	int max = 2;
	int b = 0;

	while (*(s + max) != '\0')
	{
		if ((max % 2) == 0)
		{
			*(s + b) = *(s + max);
			b++;
		}
		max++;

	}
	*(s + b) = '\0';


}
