#include "main.h"
/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a <= 9)
	{
		while (b <= 14)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
				b++;
		}
		_putchar('\n');
		a++;
		b = 0;
	}
}
