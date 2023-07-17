#include <stdio.h>

/**
 * main - it ptint numbers 0 to
 * Description: uses printf to print numbers
 * Return: main function returns
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
putchar('\n');
return (0);
}
