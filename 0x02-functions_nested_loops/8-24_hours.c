#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Ret:urn Always 0
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			int i = hours / 10;
			int j = hours % 10;
			int k = minutes / 10;
			int l = minutes % 10;

			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
