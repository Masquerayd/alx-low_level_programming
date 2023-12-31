#include "main.h"

/**
 *_strcat - the program combines two strings
 *
 * @dest: char pointer
 * @src: char pointer
 * Return: returns @dest
 */

char *_strcat(char *dest, char *src)
{
	/* declaring the variable that will be used to get the length of a string */
	int dest_length = 0; 

/*while loop is used to calculate the length of *dest */
	while (*dest != '\0')
	{
		dest_length++; /* incrementing */
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		dest_length++;

	}

	*dest = '\0';
	dest = dest - dest_length;


	return (dest);
}
