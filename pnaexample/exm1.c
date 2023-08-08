#include <stdio.h>


int main(void)
{
	char c;
	char *n = &c; /* defined the pointer */



	c = '3';
	n = 'k'; /* 0x7ffd9c1969a4 */ 
	*n = '4'; /

	printf("value of n: %p\n", n);

	/* n = &c;  assigning the address */

	/* n = 'k';  access the variable */

	printf("Value of n: %c\n", n);

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %c\n", n);
	return (0);

}
	
