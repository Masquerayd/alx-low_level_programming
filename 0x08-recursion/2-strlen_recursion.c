#include "main.h"

/**
  *_strlen_recursion - prints the length of a string
  *@s: char pointer s
  *Return: always length
  */

int _strlen_recursion(char *s)
{
	int length = 0;
	/* print string length */

	if (*s != '\0')
	{
		length = _strlen_recursion(s + 1) + 1;
	}
	return (length);
}


