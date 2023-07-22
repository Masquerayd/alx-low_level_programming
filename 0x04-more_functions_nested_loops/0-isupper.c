#include "main.h"

/**
  *_isupper - checks if a letter is a capital letter
  *
  *Decription: returns 1 if captital and returns 0 if small letter
  * @c: int c
  *Return: return 0 and 1
  */
int _isupper(int c)
{
	char ch; /* variable init*/

	for (ch = 65; ch <= 90; ch++)
	{
		if (ch == c)
		{
			return (1); /* returns 1 if alphabet is a capital*/
		}
	}
	return (0); /* returns 0 if aplhabet is not a capital*/

}
