#include "main.h"

/**
 * _islower - check character size
 *
 * Description: the functions checks if the inputs are small letter characters
 *
 * Return: always zero
 */

int _islower(int c)
{ 
	char chr;
	for (chr = 'a'; chr <= 'z' ; chr ++)
	{
		if (chr == c)
		{
			return(1);
		}
	}
	return (0);
}
