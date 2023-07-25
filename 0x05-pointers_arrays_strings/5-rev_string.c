#include "main.h"
#include <stdio.h>
/**
  *rev_string - reverses a string
  *
  *@s: char* s
  *Return: nothing
  */

void rev_string(char *s)
{
	int max = 0;
	char temp[200];
	int a = 0;

	while (*(s + max) != '\0')
	{
		temp[max] = *(s + max);
		max++;

	}

	while (max >= 0)
	{
		*(s + max) = temp[a - 1];
		max--;
		a++;
	}
}
