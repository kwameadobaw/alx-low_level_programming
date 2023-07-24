#include "main.h"
/**
 * swap_int - Swap numbers for 2 integers
 *
 * @a: first variable
 *
 * @b: Second variable
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	*a = *b;
	*b = temp_a;
}
