#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * REturn: always 0
 */
void times_table(void)
{
	int x, y, z, v, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			v = z / 10;
			d = z % 10;

			_putchar(x + '0');
			_putchar('x');
			_putchar(y + '0');
			_putchar('=');
			_putchar(v + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
