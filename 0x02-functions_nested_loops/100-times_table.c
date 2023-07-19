#include "main.h"
/**
  * print_times_table - Prints a multiplication table up to param
  * @a: The number to be treated
  *
  * Return: Number matrix
  */
void print_times_table(int a)
{
	int b, c, d;

	if (a >= 0 && a <= 14)
	{
		for (b = 0; b <= a; b++)
		{
			for (c = 0; c <= a; c++)
			{
				d = b * c;
				if (d > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
				else if (d > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
				else
				{
					if (c != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(d + '0');
				}
			}
			_putchar('\n');
		}
	}
}
