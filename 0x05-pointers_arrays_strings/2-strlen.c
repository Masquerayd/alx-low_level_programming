#include "main.h"
#include <wchar.h>
#include <stdio.h>

/**
  *_strlen - prints a strings length
  *
  *@s: int pointer s
  *Return: returns the legnth
  */
int _strlen(char *s)
{
	wchar_t *str = (wchar_t *)&s;
	int a;

	a = wcslen(str);
	printf("a: %d\n", a);

	return (a + 2);
}

