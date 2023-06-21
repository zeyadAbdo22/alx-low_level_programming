#include "main.h"
/**
 * jack_bauer -> a function that prints every minute of the day of Jack Bauer.
 *
 * Return: void (no return)
 *
 */
void jack_bauer(void)
{
	int hu;

	int mi;

	for (hu = 0; hu < 24; hu++)
	{
		for (mi = 0; mi < 60; mi++)
		{
			_putchar('0' + hu / 10);
			_putchar('0' + hu % 10);
			_putchar(':');
			_putchar('0' + mi / 10);
			_putchar('0' + mi % 10);
			_putchar('\n');
		}
	}
}
