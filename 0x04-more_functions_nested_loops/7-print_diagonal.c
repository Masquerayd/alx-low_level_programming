#include "main.h"

/**pritn_diagonal - prints a character diagonal
  *@n: int n
  *return: returns nothing
  */

void print_diagonal(int n)
{
/* who is still hear raise a hand, lol*/
	int a = 0;
	int b;

	while (a <= n)
	{
		a = a*n;
		b = 0;
		
		while (b <= a)
		{
			_putchar("\\");
			_putchar('$');
			_putchar('\n');
		}
	}
}
