#include "main.h"

/**
  *print_numbers - prints numbers 0 - 9
  *Return: returns nothing
  */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
