#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the main function
 * @argc: the number of arg
 * @argv: the array of arguments
 * Return: alwyas zero
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; argv[i]; i++)
	{

		if (atoi(argv[i]) != 0)
		{
			sum += atoi(argv[i]);

		}
		else if (*argv[i] == '0')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}


	}

	if (argc - 1 < 1)
	{
		printf("0\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
