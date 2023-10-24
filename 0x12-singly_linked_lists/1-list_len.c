#include "lists.h"
#include <stdio.h>

/**
 * printstrl - prints the string
 * @str: string to be printed
 * @len: length of string
 * Return: nothing
 */

void printstrl(const char *str, unsigned int len)
{
	if (str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", len, str);
	}
}

/**
 * list_len - prints all the elemts of a list_t
 * @h: pointer to the list to be printed
 * Return: the number of nodes
 */
size_t list_len(list_t *h)
{
	int numNodes = 0;

	while (h != NULL)
	{
		numNodes++;


		if (h->next == NULL)
		{
			return (numNodes);
		}
		h = h->next;

	}
	return (numNodes);
}
