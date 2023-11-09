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
	printf("%s\n", argv[argc - 1]);

	return (0);
}
