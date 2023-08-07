#include "main.h"
/**
 * * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptr_arr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr_arr = (char *) malloc(size * sizeof(char));
	if (ptr_arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		prt_arr[a] = c;
	}
	return (ptr_arr);
}
