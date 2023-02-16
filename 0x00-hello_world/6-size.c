#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of short: %lu bytes\n", sizeof(short));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of long long: %lu bytes\n", sizeof(long long));
     	
	return (0);
}
