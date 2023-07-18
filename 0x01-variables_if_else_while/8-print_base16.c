#include <stdio.h>

/**
 * main - it ptint numbers 0 to
 * Description: uses printf to print numbers
 * Return: main function returns
 */
int main(void)
{
	char chr;

	for (chr = 0 ; chr <= 9 ; chr++)
	{

		putchar('0' + chr);
	}
	for (chr = 'a'; chr <= 'f' ; chr++)
	{
		putchar(chr);
	}

putchar('\n');
return (0);
}
