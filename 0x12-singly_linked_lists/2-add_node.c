#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the list
 * @head: points to the pointer of the list
 * @str: the string that will be copied
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	list_t *first;
	unsigned int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	first = *(head);

	h = malloc(sizeof(list_t));

	h->str = strdup(str);
	while(str[count] != '\0')
	{
		count++;
	}
	h->next = first;
	h->len = count;
	*(head) = h;
	return (h);
}
