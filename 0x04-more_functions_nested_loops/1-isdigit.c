#include "main.h"

/**
  *_isdigit - checks if a digit is a nmber
  *
  *Decription: returns 1 if it's a number and returns 0 if small character
  * @c: char c
  *Return: return 0 and 1
  */
int _isdigit(int c)
{
	char ch; /* variable init*/

		for (ch = '0'; ch <= '9'; ch++)
		{
			if (ch == c)
			{
				return (1); /* returns 1 if alphabet is a capital*/
			}
		}
	return (0); /* returns 0 if aplhabet is not a capital*/

}

