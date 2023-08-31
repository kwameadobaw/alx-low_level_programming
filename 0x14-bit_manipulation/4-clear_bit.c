#include "main.h"
/**
  * clear_bit - sets a bit at index to zero
  * @n: pointer to number
  * @index: index to change
  * Return: 1 on success, -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
