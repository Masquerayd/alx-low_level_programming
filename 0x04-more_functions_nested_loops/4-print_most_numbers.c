#include "main.h"

/**
  *print_most_numbers - prints numbers 0 - 9
  *Return: returns nothing
  */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{	
		if (ch != '2' && ch != '4')
		{
		_putchar(ch);
		}
	}
	_putchar('\n');
}
