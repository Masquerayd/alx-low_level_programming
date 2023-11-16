#include "lists.h"

/**
 * list_len - return the elemnts of the list
 * @h: list
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	int count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
