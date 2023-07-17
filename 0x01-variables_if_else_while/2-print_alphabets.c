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
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (chr = 'A'; chr <= 'Z'; chr++)
        {
                putchar(chr);
        }
	putchar('$');
	putchar('\n');
	return (0);
}
