#include <stdio.h>
#include <math.h>
/**
 * main -prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long i;
	long max_prime = 0;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max_prime = n;
	}
	printf("%ld\n", max_prime);

	return (0);
}
