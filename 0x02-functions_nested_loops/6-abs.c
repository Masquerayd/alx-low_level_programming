#include "main.h"
#include <inttypes.h>

/**
  *_abs - returns abs
  *@a: int a
  *Return: returns abs of a
  */
int _abs(int a)
{
	intmax_t b = imaxabs(a);

	return (b);
}

