#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - has rand function and if statement
*Description: is determines if a number is greater than less tha
*n or equal to
*Return: This source code returns 0
*/
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%i %s\n", n, "is positive");
	}
	else if (n == 0)
	{
		printf("%i %s\n", n, "is zero");
	}
	else if (n < 0)
	{
		printf("%i %s\n", n, "is negative");
	}
	return (n);
}
