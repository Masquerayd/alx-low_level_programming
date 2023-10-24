#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elemts of a list_t
 * @h: pointer to the list to be printed
 * Returns: the number of nodes
 */
size_t print_list(list_t *h)
{
	int numNodes = 0;

	while (h != NULL)
	{
		printstrnlen(h->str, h->len);
		numNodes++;


		if (h->next == NULL)
		{
			return (numNodes);
		}
		h = h->next;

	}
	return (numNodes);
}
