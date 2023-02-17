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
	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else
	{
		printf("The number is negative\n");
	}
	return 0;
}
