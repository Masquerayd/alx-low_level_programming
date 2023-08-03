#include "main.h"

/**
  *factorial - calculates the factorial of n - 1
  *@n: unsigned int n
  *Return: factorial
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}

