#include "main.h"
/**
 * print_rev - Print a string in reverse
 *
 * @s: The sstring to be printed
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != 0)
	{
		length++;
	}
	for (i = length; i >= 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
