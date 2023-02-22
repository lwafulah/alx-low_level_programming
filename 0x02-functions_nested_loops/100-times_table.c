#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: parameter to be tested
 * Return: Always 0
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	int i, j;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			putchar('0' + (i * j) / 10);
			putchar('0' + (i * j) % 10);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
