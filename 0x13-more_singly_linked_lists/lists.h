#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>



/**
 * struct listint_t - list of elements
 * @num: integer
 * @nextnode: pointer to the next node
 */

typedef struct listint_a
{
	int n;
	struct listint_a *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
