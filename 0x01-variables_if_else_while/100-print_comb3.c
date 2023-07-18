#include <stdio.h>

/**
 * main - it ptint numbers 0 to
 * Description: uses printf to print numbers
 * Return: main function returns
 */
int main(void)
{
	int out = 0;
	int in;

	for (out = 0 ; out <= 9 ; out++)
	{
		for (in = 1; in <= 9; in++)
			{
			if (out < in)
			{
				putchar('0' + out);
				putchar('0' + in);
				if (out != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

putchar('\n');
return (0);
}
