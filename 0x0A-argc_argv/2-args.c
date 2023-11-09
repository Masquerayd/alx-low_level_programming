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
	int i;
	(void)argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
