#include "main.h"
/**
 * print_number - Used to print numbers
 *
 * @n: the number to be printed
 *
 * Return: Always 0
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div = div * 10;
	}
	while (divisor > 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
