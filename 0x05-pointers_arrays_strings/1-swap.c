#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Pointer 1
 * @b: Pointer 2 
 * Return: void
 */

void swap_int(int *a, int *b);
{
	int x = *a;
	*a = *b;
	*b = x;
}
