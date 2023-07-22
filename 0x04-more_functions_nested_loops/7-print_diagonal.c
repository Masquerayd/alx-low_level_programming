#include "main.h"
#include <stdio.h>

/**
  *print_diagonal - prints a character diagonal
  *@n: int n
  *return: returns nothing
  */

void print_diagonal(int n)
{
	int a = 1;
	int b;

	if (n <= 0)
	{
		_putchar(10);
	}

	while (a <= n)
	{
		b = 0;
		while (b < a)
		{
			_putchar(32);
			b++;
		}
		if (a != 0)
		{
			_putchar(92);
		}
		if (a >= 0)
		{
			_putchar('\n');
		}
		a++;

	}


}
