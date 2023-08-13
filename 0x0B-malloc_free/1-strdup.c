#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/*
 * Local function prototypes
 */
int _strlen(char *str);

/**
 * _strlen - used to calculate the size of a string
 * @str: string to calculate length
 * Return: Returns length of string
 */
int _strlen(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		return (0);
	}


	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length + 1);
}

/**
 * _strdup - Function duplicates a string to a new pointer
 *
 * @str: pointer to the string to be duplicated
 * Return: Returns Null if str == NULL , Null if memory is insufficient
 * and pointer if the functions was succesful
 */
char *_strdup(char *str)
{
/*
 * creating a new pointer and allocating space for it in memory
 */
	char *dup; 	
	int count = 0;
/*
 * checks for a Null pointer
 */
	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(char) * _strlen(str));


/*
 * checking if string is empty
 */

	if (*(str) == '\0')
	{
		dup[0] = '\0';
		return (dup);
	}

/*
 * checking if malloc returns null
 */
	if (dup == NULL)
	{
		return ('\0');
	}
/*
 * coping str to dup
 */
	while (*(str + count) != '\0')
	{
		dup[count] = *(str + count);
		count++;
		if ((str + count) == NULL)
		{
			return (NULL);
		}
	}
	dup[count] = '\0';
	return (dup);
}
