#include "main.h"

/**
  *print_last_digit - print last value
  *@a: int a
  *Description: The function get the last number in a value
  *Return: returns a value
  */
int print_last_digit(int a)
{
	_putchar(a % 10);
	return (a % 10);
}
