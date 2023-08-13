#include "main.h"
#include <stdio.h>

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
	int length = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}

	printf(" length: %d\n", length);

	while (*(src + count) != '\0')
	{
		temp[count] = *(src + count);
		printf("temp: %c\n", temp[count]);
		*(dest + length -1) = temp[count];
		count++;
	}
	return (dest);
}
