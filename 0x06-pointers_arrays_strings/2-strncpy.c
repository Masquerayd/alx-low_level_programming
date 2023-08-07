#include "main.h"

/**
 * _strncat - copies n most bytes from src to dest
 * @dest: char pointer destination fron character
 * @src: char pointer source for character
 * @n: int n , for amount of char to copy
 * Return: a pointer dest with nth src characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	char temp[5000] = {0};
	int i;
	int length = 0;

	while (*(src + count) != '\0')
	{
/*
 * copies the string src to a temp array
 */
		temp[count] = *(src + count);
		count++;
	}
	while (*(dest + length) != '\0')
	{
/*
 * calculates the legnth of dest
 */
		length++;
	}

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
/*
 * copies the nth characters from the temp array to dest
 */
		*(dest + i) = temp[i];
	}
	*(dest + i) = '\0';

	return (dest);
}
