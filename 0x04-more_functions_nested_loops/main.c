#include "main.h" 

void print_number(int n)
{
	int n = -9818765;
	int mul = 10;
	int num2;

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}

	while ( mul < n)
	{
		mul *= 10;
	}

	while ( mul >= 10)
	{
		num2 = ((n % mul) / (mul/10));
		putchar('0' + num2);
		mul /= 10;

		
	}
	putchar('\n');

}	
