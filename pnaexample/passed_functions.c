#include <stdio.h>

/**modif_my_param - this functions chages m to 405
  *@m: a unsed intger
  *
  * returns: nothing.
  */

void modif_my_param(int *m)
{
	printf("Value of 'm': %p\n", m); /* prints the value of m*/
	printf("Address of 'm': %p\n", &m); /* prints the address of m */
	*m = 402; /* sets the address that m points to, to 402 */
}


/**
  * main - n is passed on to modif_my_param
  *
  *Return: always zero
  */

int main(void)
{
	int n;
	int *p;

	p = &n; /*sets to n's address */
	n = 98; /*sets n to 98*/
	printf("Value of 'n' before the call: %d\n", n);/* show value of n*/
	printf("Address of the 'n': %p\n", &n); /*shows the address of n in memory*/
	printf("Value of 'p': %p\n", p); /* shows the value of p*/
	printf("Address of 'p': %p\n", &p); /*shows the address of p */
	modif_my_param(p); /* call function */
	printf("Value of 'n' after the call: %d\n", n); /* displays the value of n after function*/

	return (0);
}
