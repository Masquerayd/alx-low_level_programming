#include "main.h"

/**
 * _isalpha - check character size
 *
 * @c: int character
 *
 * Description: the functions checks if the inputs are small letter characters
 *
 * Return: always zero
 */

int _isalpha(int c)
{
	char chr;

	for (chr = 'a'; chr <= 'z' ; chr++)
	{
		if (chr == c)
		{
			return (1);
		}
	}

	for (chr = 'A'; chr <= 'Z' ; chr++)
	{
		if (chr == c)
		{
			return (1);
		}
	}
	return (0);
}
