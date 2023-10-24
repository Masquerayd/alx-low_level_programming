#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed sting)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;


size_t print_list(list_t *h);
void printstrnlen(const char *str, unsigned int len);

#endif
