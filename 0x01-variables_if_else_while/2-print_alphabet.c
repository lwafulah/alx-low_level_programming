#include <stdio.h>

/**
 * main -lower alphabet
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar("%c", ch);
		ch++;
	}
	return (0);
}
