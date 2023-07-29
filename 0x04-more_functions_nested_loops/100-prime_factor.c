#include <stdio.h>


/**
  *main - print largest prime number
  *Return: always (0)
  */
int main(void)
{
	int number = 1231952;
	int oddn;


	while (number % 2 == 0)
	{
		number = number / 2;
	}

	for (oddn = 3; oddn * oddn <= number; oddn += 2)
	{
		while (number % oddn == 0)
		{
			number = number / oddn;
		}
	}

	printf("%d", number);
	printf("\n");
	return (0);

}


