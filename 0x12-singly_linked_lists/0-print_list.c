#include "lists.h"

/**
 * print_list - prints all the elemts of a list_t
 * @h: pointer to the list to be printed
 * Returns: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int numNodes = 0;

	while (h->next != NULL)
	{
		printstrnlen(h->str,h->len);
		h = h->next;
		numNodes++;

		if (h->next == h)
		{
			return (numNodes);
		}
		else if (h->next == NULL)
		{
			return (numNodes);
		}

		
	}
	return (numNodes);
}

	
