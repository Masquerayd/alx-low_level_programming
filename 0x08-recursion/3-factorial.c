#include "main.h"

/**
  *factorial - calculates the factorial of n - 1
  *@n: unsigned int n
  *Return: factorial
  */

unsigned int factorial(unsigned int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n*factorail(n - 1);
}

