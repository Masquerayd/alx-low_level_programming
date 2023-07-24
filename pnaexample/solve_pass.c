#include <stdio.h>

/**
  *modif_my_char_var
  * 
  *Return: nothing
  */

void modif_my_char_var(char *cc, char ccc)
{
	printf("The value of ccc before ultering: %c\n" , ccc);
	*cc = 'o';
	printf("The value of c after first change using dereferencing: %c\n", ccc);
	ccc = '1';
	printf("The value of ccc after setting ccc to char '1': %c\n", ccc);
}

/**
  *main - solve me
  *return: always 0
  */

int main(void)
{
	char c; /* creates char variable */
	char *p; /* creates pointer p */

	p = &c; /* sets pointer p to address of c */
	c = 'H'; /* sets variable c to 'H' */
	printf("The value of c before function: %c\n", c);
	modif_my_char_var(p,c); /* passes p and c to function modify_my_char */
	printf("The value of c after function: %c\n", c);
	return (0);
}

