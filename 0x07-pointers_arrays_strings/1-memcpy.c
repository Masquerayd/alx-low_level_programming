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
	unsigned int count = 0;
	char temp[10000] = {0};


	while (*(src + count) != '\0')
	{
/* stores the contents of src to temp file */
		temp[count] = *(src + count);
		count++;
	}

	count = 0;

	while (count < n || *(dest + count) != '\0')
	{
/*
 *add src values to dest for each memory
 */
		*(dest + count) = temp[count];
		count++;
	}
	return (dest);
}


