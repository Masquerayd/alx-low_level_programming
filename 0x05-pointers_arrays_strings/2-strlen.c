#include "main.h"
#include <wchar.h>
#include <stdio.h>

/**
  *_strlen - prints a strings length
  *
  *@s: int pointer s
  *Return: returns the legnth
  */
int _strlen(char *s)
{
	int max = 0;


	while ( *(s + max) != '\0')
	{
	
		max++;
	}
	return (max);

}

