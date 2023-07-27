#include "main.h"

/*_strcat - the program combines two strings
 *
 * @dest: char pointer
 * @src: char pointer
 * return: nothing
 */

char *_strcat(char *dest, char *src)
{
	int dest_legnth = 0;


	while (*dest != '\0')
	{
		dest_legnth++;
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;

	}

	return (dest);
}
