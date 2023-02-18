#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
		putchar(s);
	putchar('\n');

	return (0);
}
