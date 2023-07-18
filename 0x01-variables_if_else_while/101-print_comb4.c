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
	int inner;

	for (out = 0 ; out <= 9 ; out++)
	{
		for (in = 1; in <= 9; in++)
		{
			for (inner = 2; inner <= 9; inner++)
			{
				if (out < in && in < inner && out < inner)
				{
					putchar('0' + out);
					putchar('0' + in);
					putchar('0' + inner);
					if (out != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

putchar('\n');
return (0);
}
