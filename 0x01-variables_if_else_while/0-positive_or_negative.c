#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints if random number is positive, negative or 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);

	if (n > 0)
	{
		printf(" is positive");
	}
	else if (n == 0)
	{
		printf(" is negative");
	}
	else if (n < 0)
	{
		printf(" is zero");
	}
	return (0);
}
