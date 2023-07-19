#include "main.h"
#include <inttypes.h>

/**
  *print_last_digit - print last value
  *@a: int a
  *Description: The function get the last number in a value
  *Return: returns a value
  */
int print_last_digit(int a)
{
	intmax_t b = imaxabs(a);

	b = b % 10;
	_putchar('0' + b);

	return (b);
}
