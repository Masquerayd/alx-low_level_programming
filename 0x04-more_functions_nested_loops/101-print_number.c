#include "main.h"

/**
  *print_number - prints numbers
  *@n: int n
  *Return: nothing
  */
void print_number(int n)
{
	int mul = 10;
	int num2;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (mul < n)
	{
		mul *= 10;
	}

	while (mul >= 10)
	{
		num2 = ((n % mul) / (mul / 10));
		_putchar('0' + num2);
		mul /= 10;

	}
}
