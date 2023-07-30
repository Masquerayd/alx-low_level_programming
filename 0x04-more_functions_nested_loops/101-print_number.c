#include "main.h"
#include <stdio.h>

/**
  *print_number - prints numbers
  *@n: int n
  *Return: nothing
  */
void print_number(int n)
{
/*
 *	unsigned int mul = 10;
 *	unsigned int num2 = 0;
 */
	unsigned int k = n;


	if (n < 0)
	{
		k = -n;
		_putchar('-');
	}

	if (k / 10 != 0)
	{
		print_number(k / 10);
	}

	_putchar('0' + k % 10);

}
