#include "main.h"
/**
 * print_number - Used to print an integer.
 *
 * @n: the integer to be printed.
 *
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (n > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
