#include "main.h"

/**
  * print_sign - detects sign
  * @n: int variable n passed in function
  * Description: detects the sign of a variable that is passed into the function
  * Return: return 1, 0 , -1 
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (1);
}
