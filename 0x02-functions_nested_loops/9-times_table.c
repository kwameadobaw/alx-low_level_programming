#include "main.h"
/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int a, b, result, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;

			if (result > 9)
			{
				c = result % 10;
				d = (result - c) % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(c + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
