#include "main.h"


/**
  * _memset - write a function that fills a memory with a byte
  *
  * @s: char *s
  * @b: char b
  * @n: unsigned int n
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*s = b;
		count++;
		s++;
	}
	return (s - count);
}
