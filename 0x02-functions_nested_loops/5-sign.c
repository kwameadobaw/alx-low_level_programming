#include "main.h"
/**
 * print_sign - Prints the corresponding sign of the value
 *
 * @n : The number to be checked
 *
 * Return: 1 if the number is positive or -1 if the number is negative or otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n = 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
