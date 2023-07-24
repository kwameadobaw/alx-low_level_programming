#include <stdio.h>
#include "main.h"
/**
 * print_array - Used to print an array
 *
 * @a: a pointer to the array
 *
 * @n: the length of the array
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
