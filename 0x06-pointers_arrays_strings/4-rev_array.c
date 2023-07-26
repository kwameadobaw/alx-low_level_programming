#include "main.h"
/**
 * reverse_array - Reverses an array
 *
 * @a: the array name
 *
 * @n: the array length
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int temp_x;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		temp_x = a[x];
		a[x] = a[y];
		a[y] = temp_x;
	}
}
