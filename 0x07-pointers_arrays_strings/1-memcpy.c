#include "main.h"

/**
  * _memcpy - copies n bytes from the memory of src to dest
  *
  *@dest: char dest string to copy to
  *@src: char *src string to copy
  *@n: the number of bytes to copy
  *Return: Returns the combined string
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int length = 0;
	unsigned int count = 0;

	while (*dest != '\0')
	{
/*
 *serves as a count for the length
 */

		length++;
/*
 *Increments the memory address
 */
		dest++;
	}

	while (count < n)
	{
/*
 *add src values to dest for each memory
 */
		*dest = *src;
		length++;
		count++;
		src++;
		dest++;
	}
	return (dest - length);
}


