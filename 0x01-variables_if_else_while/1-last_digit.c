#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d Last digit of n is n and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d Last digit of n is n is and is 0\n", n);
	}
	else if (n < 6 && !n == 0)
	{
		printf("%d Last digit of n is n and is less than 6 and not 0\n", n);
	}
	return (0);
}
