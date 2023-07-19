#include "main.h"

/**
  *print_alphabet_x10 - prints alphabets
  *
  * Description: Prints small alphabets from a to z using a for loop
  *
  * Return: return nothing
  */
void print_alphabet_x10(void)
{
	char A;
	int i = 0;

	while (i < 9)
	{

		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);

		}
		_putchar('\n');
		i++;
	}
}
