#include "main.h"

/**
  *print_diagonal - prints a character diagonal
  *@n: int n
  *return: returns nothing
  */

void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n < 0)
	{
		_putchar('\n');
	}

	while (a <= n)
	{
		a = a * n;
		b = 0;

		while (b <= a)
		{
			_putchar(32);
			b++;
		}
		if (a != 0)
		{
			_putchar(92);
		}
		_putchar('\n');
		a++;

	}
}
