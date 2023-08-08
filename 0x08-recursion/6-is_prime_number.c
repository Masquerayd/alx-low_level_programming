#include "main.h"

/**
  * is_prime_number - calculates if n is a prime number
  * 
  * @n: int n
  * Return: returns if prime otherwise 0
  */

int is_prime_number(int n)
{

	if (n >= 1 && n <= 2)
	{
		return (1);
	}
	 
/*
   1.check if its a even number
   2. if it is a even number return 1 , else 0
   
*/
	if (n % 2 == 0)
	{

		


/*
   1. check if it is a odd number 
   2. return 1 if it is divisible by odd, else 0
*/
