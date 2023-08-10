#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a <= max - min; a++)
		ptr[i] = min + a;
	return (ptr);
}
