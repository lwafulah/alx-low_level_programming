#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 * Return: always 0
 */
int main(void)
{
	int sum = 0;

	for (int i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
