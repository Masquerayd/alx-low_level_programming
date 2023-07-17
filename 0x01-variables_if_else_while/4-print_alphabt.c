#include <stdio.h>

/**
  *main - Prints alphabets in lowercase, followed by a new line
  *Description: This program prints alphabets in lower case using putchar
  *you can only use putchar twice in your code
  *Return: This function returns 0
  */

int main(void)
{
	/**
	  * Declaring the character variable that will be used for different
	  * alphabets
	  */
	char A = 'a';
	int count;

	for (count = 0; count <= 23; count++)
	{
		putchar(A);
		A++;

		if (A == 'q' || A == 'e')
		{
			A++;
		}
	}
	/*
	 * putchar('$');
	 */
	putchar('\n');
	return (0);
}
