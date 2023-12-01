#include "main.h"

/**
 * powtwo - calculates the power 2 to the power of num
 * @num: 2 to this number
 * Return: the value
 */
unsigned int powtwo(unsigned int num)
{
	unsigned int i, value = 1;


	for (i = 0; i < num; i++)
	{
		value *= 2;
	}

	return (value);
}

/**
 * _strlen - get the length of a string
 * @b: string
 * Return: length of string
 */
unsigned int _strlen(const char *b)
{
	unsigned int length;

	for (length = 0; b[length] != '\0'; length++)
	{
	}

	return (length);
}

/**
 * binary_to_uint - converts binary to int
 * @b: string for binary
 * Return: value of binary in base 10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int strlen, i, value = 0;

	if (b == NULL)
	{
		return (0);
	}

	strlen = _strlen(b);

	for (i = 0; i < strlen; i++)
	{
		if (b[strlen - i - 1] == '1')
		{
			value += powtwo(i);
		}
		else if (b[strlen - i - 1] != '0')
		{
			return (0);
		}
	}
	return (value);
}
