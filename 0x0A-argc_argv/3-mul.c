#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, product;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		return (product);
	}
	return (0);
}

