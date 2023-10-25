#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head:  pointer to the pointer of head
 * @n: int
 * Return: the address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeptr;

	nodeptr = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	else if (*head == NULL)
	{
		nodeptr->next = NULL;
	}
	else
		nodeptr->next = *head;
	nodeptr->n = n;
	*head = nodeptr;

	return (0);
}

