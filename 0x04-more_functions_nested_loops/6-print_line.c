#include "main.h"

/**
  *print_line - prints n lines
  *@n: int n
  *return: null
  */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
