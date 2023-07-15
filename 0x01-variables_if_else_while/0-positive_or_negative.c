#include <stdlib.h>
#include <time.h>
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%s\n",  is positive);
	}
	else if (n == 0)
	{
		printf("%s\n", " is zero");
	}
	else if (n < 0)
	{
		printf("%s\n", " is negative");
	}
	return (0);
}
