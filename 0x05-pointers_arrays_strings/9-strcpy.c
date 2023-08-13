#include "main.h"

/**
 * _strcpy - copies string src to dest
 * @dest: destination string
 * @src: source string
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;
	char temp[10000] = {0};

	while (*(src + count) != '\0')
	{
		temp[count] = *(src + count);
		*(dest + count) = temp[count];
		count++;
	}
	return (dest);
}
