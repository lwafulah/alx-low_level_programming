#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;
	long d;
	long long e;
	float f;

	printf("Size of char: %lu byte(s)\n", sizeof(b));
	printf("Size of int: %lu byte(s)\n", sizeof(a));
	printf("Size of long: %lu byte(s)\n", sizeof(d));
	printf("Size of long long: %lu byte(s)\n", sizeof(e));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
