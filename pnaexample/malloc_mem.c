#include <stdio.h>
#include <stdlib.h>

/**
 * main - stores the new allocated space in memory and prints the sum
 * @n0: integer to store and print
 * @n1: integer to store and print 
 * @n2: integer to store and print
 *
 * Return: 0
 */

void m( int n0, int n1, int n2)
{
	int *t;
	int sum;
/*
 * assigning the address of the dynamic memory to t
 */
	t = malloc(sizeof(*t) * 3);
/*
 *  assigning values to the the dynamic memory
 */
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
}

/**
 * main - introduction to malloc and free
 */

int main(void)
{
	m(98,402,-1024);
	return (0);
}

