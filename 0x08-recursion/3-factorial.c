#include "main.h"

/**
  *factorial - calculates the factorial of n - 1
  *@n: unsigned int n
  *Return: factorial
  */

long int factorial(long int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

