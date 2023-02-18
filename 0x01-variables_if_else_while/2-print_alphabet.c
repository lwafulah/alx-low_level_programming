#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - outline lower  alphabet case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
