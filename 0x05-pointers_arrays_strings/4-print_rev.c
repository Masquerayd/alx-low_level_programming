#include "main.h"

/**
  *print_rev - prints the string in reverse
  *@s: char s
  *return: always 0
  */

void print_rev(char *s)
{
	/*init variables*/
	int max = 0;
	int i = 1;

	/* uses while loop to get size of array */
	do {
		max++;
	} while (*(s + max) != '\0');

	/* then uses max to print in reverse */
	while ((max - i) != -1)
	{
		_putchar(*(s + max - i));

		i++;
	}
	_putchar('\n');
}
