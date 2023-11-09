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
	printf("%d\n", argc-1);
	(void)argv;

	return (0);
}
