#include "holberton.h"

/**
 * _strlen - calculates the length of a string
 * @x: parameter to function _strlen
 * Return: - return length of string
 */

int _strlen(char x[])
{
	int i = 0, count = 0;

	while (x[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src), i;

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + 1] = src[i];
	}
	return (dest);
}
