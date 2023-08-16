#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search for an integer
 * @array: an array to search for the integer
 * @size: Size of the array
 * @cmp: pointer to a function
 * Return: Return value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (size <= 0)
		return (-1);
	while (++f < size)
	{
		if (cmp(array[f]) != 0)
			return (f);
	}
	return (-1);
}
