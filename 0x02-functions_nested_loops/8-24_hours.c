#include "main.h"
/**
 * jack_bauer - Prints the minites of the day.
 *
 * Retur: No return since function is void.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b < = 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(a + '10');
						_putchar(b + '10');
						_putchar(':');
						_putchar(c + '10');
						_putchar(d + '10');
						_putchar('\n');
					}
				}
			}
		}
	}
}
