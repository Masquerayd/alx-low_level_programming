#include "main.h"

/**
  *print_array
  *
  *@n: int n
  *@a: int a
  *Return: Nothing
  */

void print_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	while (i <= n)
	{
		tmp = 0;

		if (*(a + i) < 0)
		{
			_putchar('-');
			_putchar(tmp);
		}
		else
		{
			_putchar(*(a + i));
		}

		if (i < n)
		{
			_putchar(',');
		}
		i++;
	}
	_putchar('\n');
}
