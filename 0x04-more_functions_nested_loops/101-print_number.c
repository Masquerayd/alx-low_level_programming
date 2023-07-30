#include "main.h"
#include <stdio.h>

/**
  *print_number - prints numbers
  *@n: int n
  *Return: nothing
  */
void print_number(int n)
{
	int mul = 10;
	int num2 = 0;
	int k = n;

	if (k < 0)
	{
	/* checks if value is less than 0, then changed
	 * it to a positive while print the negative */
		k = -k;
		_putchar('-');
		/*printf(" first if statement");*/
	}
	/* checks if it is int_max */
	if (k == 2147483646)
	{
		printf("k: %d\n", k); /* used to debug */

	/* prints the last number depending on mul */	
		num2 = ((k % mul) / (mul / 10));
		/*printf("num2: %d\n", num2); debug line */
		_putchar('0' + num2);
	
		mul = 10;
	}
	else
	{
		/*k *= 10;*/ /*please ignore */
	}

	while (mul < k)
	{
	/* debugging line*/ 
		printf("k ,n,mul : %d, %d, %d\n", k, n, mul);
	/* increments mul so that the remiander '%' prints
	 * the first number first */	
		mul = 10 * mul;
	}

	while (mul >= 10)
	{
		if (k == 10)
		{
			
			_putchar('1');
		}
	/*used to print first number of k */
		num2 = ((k % mul) / (mul / 10));
		/*printf("num2: %d\n", num2);*/
		_putchar('0' + num2);
		mul /= 10;
	}
}
