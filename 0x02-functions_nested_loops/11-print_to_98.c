#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter to be tested
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;
	
	for (i = n; i < 99; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
