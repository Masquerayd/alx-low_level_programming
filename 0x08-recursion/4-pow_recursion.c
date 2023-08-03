#include "main.h"
#include <stdio.h>

/**
  * _pow_recursion - return the value of x raised to the power
  *
  *@x
  *@y
  *Return: the power raised
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
