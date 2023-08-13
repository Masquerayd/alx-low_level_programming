#include "main.h"

/**
 * _strncpy - copies n most bytes from src to dest
 * @dest: char pointer destination fron character
 * @src: char pointer source for character
 * @n: int n , for amount of char to copy
 * Return: a pointer dest with nth src characters
 */

char *_strncpy(char *dest, char *src, int n)
{
	char temp[5000] = {0};
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
/*
 * copies the nth characters from the temp array to dest
 */
		temp[i] = *(src + i);
		*(dest + i) = temp[i];
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
