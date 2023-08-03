#include "main.h"


/**
  * _puts_recursion - prints a string
  * @s: char pointer s
  * Return: always null
  */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{

		_putchar(*s);
		s++;
		_puts_recursion(s);
		i = 1;
	}
	if (*s == '\0' && i == 0)
	{
		_putchar('\n');
	}
	return;

}
