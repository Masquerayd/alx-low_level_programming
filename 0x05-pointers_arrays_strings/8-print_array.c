#include "main.h"

void print_number(int n);

/**
  *print_array - prints array
  *
  *@n: int n
  *@a: int a
  *Return: Nothing
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		print_number(a[i]);
		if (i < n - 1)
		{
		_putchar(',');
		_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}

/**
  *print_number - prints numbers
  *@n: int n
  *Return: nothing
  */
void print_number(int n)
{
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
