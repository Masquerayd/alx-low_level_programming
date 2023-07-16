#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/* more headers goes there */

/**
*main - has rand function and if statement
*Description: is determines if a number is greater than less tha
*n or equal to
*Return: This source code returns 0
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10; /* This prints the last digit*/


	if (last_digit > 5)
	{
		printf("Last digit of %i", n);
		printf(" is %i and is greater than 5", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i", n);
		printf("is %i and is 0", last_digit);
	}

	else if (last_digit < 6)
	{
		printf("Last digit of %i", n);
		printf("is %i and is less than 6 and not 0", last_digit);
	}
	return (0);
}
