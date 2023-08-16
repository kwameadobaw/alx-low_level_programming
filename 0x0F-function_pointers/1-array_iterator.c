#include "function_pointers.h"
/**
 * array_iterator - executes function for every element of arrray
 * @size: size of the array
 * @action: pointer to a function
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t = f;

	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}
