#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of arg
 * @argv: the array of arguments
 * Return: alwyas zero
 */
int main(int argc, char *argv[])
{
	if (argc - 1 < 2)
	{
		printf("0\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
