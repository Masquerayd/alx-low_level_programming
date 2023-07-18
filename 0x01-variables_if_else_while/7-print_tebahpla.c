#include <stdio.h>

/**
 * main - it ptint numbers 0 to
 * Description: uses printf to print numbers
 * Return: main function returns
 */
int main(void)
{
	char chr;
	int y = 25;

	for (chr = 'a'; chr <= 'z'; chr++)
	{

		putchar(chr + y);
		y = y - 2;
	}
putchar('\n');
return (0);
}
