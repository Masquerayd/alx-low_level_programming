#include "_putchar.c"

/**
 *main - prints
 *Description: Prints _putchar using header file
 *Return: return 0
 */

 int main(void)
{
	char string[] = "_putchar\n";
	int i = 0;

	while( i < 9)
	{
		_putchar(string[i]);
		i++;
	}

	return (0);
}
