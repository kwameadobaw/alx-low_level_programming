#include "function_headers.h"
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
	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]) != 0)
			return (f);
	}
	return (-1);
}
