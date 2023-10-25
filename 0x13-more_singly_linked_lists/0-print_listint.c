#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_listint - prints all the elements in list
 * @h: the pointer to the list
 * Return: The number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
