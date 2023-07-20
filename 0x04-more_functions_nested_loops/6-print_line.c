#include <stdio.h>

/**
 * print_line - check the code.
 *
 * @n: number of times to be printed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int limit = 1;

	if (n > 0)
	{
		for (limit = 1; limit <= n; limit++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
