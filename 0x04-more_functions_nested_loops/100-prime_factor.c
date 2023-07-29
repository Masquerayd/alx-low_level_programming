#include <stdio.h> 

int main(void)
{
	int number = 1231952;
	int oddn;


	while(number%2 == 0)
	{	
		printf("2,");
		number = number/2;
	}

	for(oddn = 3; oddn*oddn <=number; oddn += 2)
	{
		while (number%oddn == 0)
		{
			printf("%d,", oddn);
			number = number/oddn;
		}
	}

	if (number > 1)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);

}


