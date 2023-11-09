#include "calc.h"

/**
 * op_add - sums the two integers
 *
 * @int a: first integer
 * @int b: second integer
 * Return: The sum of int a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - get the differnece of two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: the difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/** 
 * op_mul - multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: the product of the two integers
 */
int op_mul(int a, int b)
{
	return (a*b);
}

/**
 * op_div - divides a by b
 *
 * @a: first integer
 * @b: second integer
 *Return: the division of a by b
 */
int op_div(int a, int b)
{
	return (a/b);
}

/**
 * op_mod - get the remainder of a divided by b
 *
 * @a: first integer
 * @b: second integer
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a%b);
}

