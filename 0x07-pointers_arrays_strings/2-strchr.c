#include "main.h"

/**
  *_strchr - located a character in a string
  *
  *@s: char pointer to use when locating a character
  *@c: char character that will be located in the string
  *Return: return the addres of the string with character
  */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
		s++;
	} while (*s != '\0');

	if ( c == '\0')
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
