#include "main.h"


/**
  * _puts_recursion - prints a string
  * @s: char pointer s
  * Return: always null
  */
void _puts_recursion(char *s)
{
/*
 *Print a single character from string
 */
	_putchar(*s);
/*
 *Increments string addresss
 */
	s++;
/*
 *if statment for recursion
 */
	if (*s != '\0')
	{
/*
 *enters its own function until null
 */
	_puts_recursion(s);
	}
/*
 *prints newline at the end of the string
 */
	if (*s == '\0')
	{
	_putchar('\n');
	}
/*
 *return nothing since its void
 */
	return;

}
