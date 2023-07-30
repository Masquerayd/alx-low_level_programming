#include "main.h"
#include <stdio.h>

/**
  *print_number - prints numbers
  *@n: int n
  *Return: nothing
  */
void print_number(int n)
{
/*	unsigned int mul = 10;
	unsigned int num2 = 0;*/
	int k = n;


	if (n < 0)
	{
		k = -n;
		_putchar('-');
	}
	


/*	while (mul < k)
	{
		mul = 10 * mul;
	}

	while (mul >= 10)
	{
		if (k == 10)
		{
			
			_putchar('1');
		}
		num2 = ((k % mul) / (mul / 10));
		_putchar('0' + num2);
		mul /= 10;
	}*/

	printf("outside if\n");
	if (k / 10 >= 0)
	{
		printf("inside if\n");

		print_number(k/10); 
	}
	printf("printing char\n");

	_putchar('0' + k % 10);

}
