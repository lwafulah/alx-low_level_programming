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
	char lt;
	
	for (lt = 'z'; lt >= 'a'; lt--)
		putchar(lt);
	putchar('\n');
	
	return (0);
}
