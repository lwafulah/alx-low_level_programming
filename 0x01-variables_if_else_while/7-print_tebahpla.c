#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - lower case in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char let;
	
	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');

	return (0);
}
