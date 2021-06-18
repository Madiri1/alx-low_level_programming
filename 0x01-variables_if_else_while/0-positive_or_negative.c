#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - check if number stored in the variable n is positive or negative.
 *
 * Description: program will assign a random number to variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}
