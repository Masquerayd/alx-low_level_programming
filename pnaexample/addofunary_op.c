#include <stdio.h>

/**
  *main - prints the address of variables
  *return: returns zero
  */
int main(void)
{
	char c;
	int n;

	printf("Address of varibles 'c': %p\n", &c);
	printf("Address of varibles 'n': %p\n", &n);

	return (0);
}
