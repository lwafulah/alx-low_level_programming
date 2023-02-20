#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, k;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (k = p + 1; k <= '9'; k++)
			{
				if (d != p && p != k && d != k)
				{
					putchar(d);
					putchar(p);
					putchar(k);

					if (d == '7' && p == '8' && k == '9')
					continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
