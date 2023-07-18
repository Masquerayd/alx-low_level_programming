#include <stdio.h>

/**
 * main - it ptint numbers 0 to
 * Description: uses printf to print numbers
 * Return: main function returns
 */
int main(void)
{
	int hex = 0x00;

	for (hex = 0 ; hex <= 9 ; hex++)
	{

		putchar('0' + hex);
		if (hex != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

putchar('\n');
return (0);
}
