#include <stdio.h>

/**
  *main - writes text without printf or puts
  *Description: uses write to print text
  *Return: return 0
  */
int main(void)
{
	write(1, "and that piece of art", strlen("and that piece of art"));
	write(1, " is useful\" - Dora", strlen(" is useful\" - Dora"));
	write(1, " Korpar, 2015-10-19", strlen(" Korpar, 2015-10-19"));
}
