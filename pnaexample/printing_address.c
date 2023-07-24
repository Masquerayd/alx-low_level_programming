#include <stdio.h>

/**
  *main - printing the address of a pointer
  *return: always returns zero
  */
int main(void)
{
	int *p; /*declares variables a pointer*/
	int n; /*delcares int variable n*/

	n = 98; /*assigns 98 to variable n*/
	p = &n; /*assigns the address of n to p*/

	
	printf("Address of variable 'p': %p\n", &p); /* prints address*/
	 
	return (0);
}

