#include "main.h"




/**
  *main - prints
  *Description: prints _putchar using header main.h
  *Return: Returns 0
  */

int main(void)
{
	int i = 0;
	char string[] = "_putchar\n";

	while (i < 9)
	{

		_putchar(string[i]);
		i++;
	}

	return (0);

}

