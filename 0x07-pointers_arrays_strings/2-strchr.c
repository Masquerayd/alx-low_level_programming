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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
