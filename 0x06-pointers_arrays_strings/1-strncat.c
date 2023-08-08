#include "main.h"

/**
 *_strcat - the program combines two strings
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int n
 * Return: returns @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int count = 0;

/* counts the length of dest and increments the address to null */
	while (*dest != '\0')
	{
		dest_length++;
		dest++;
	}


	while (count <= n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
		dest_length++;

	}

	*dest = '\0';
	dest = dest - dest_length;


	return (dest);
}
