#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lower case 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char alpha;

	while (i <= 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
