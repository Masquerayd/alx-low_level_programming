#include "main.h"

/**
  *print_last_digit - print last value
  *@a: int a
  *Description: The function get the last number in a value
  *Return: returns a value
  */
int print_last_digit(int a)
{
	int b;
	int c;

	b = a % 10;
	for (c = 0; c <= 9; c++)
	{
		if(c == b)
		{
		_putchar('0' + c);
		}
	}

	return ('0' + c);
}
