#include "main.h"
/**
 * times_table - Prints out the times table.
 *
 * Return: No return value since function is void.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			_putchar(product + '0');
		}
		_putchar('\n');
	}
}
