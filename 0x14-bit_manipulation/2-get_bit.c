#include "main.h"
/**
  * get_bit - gets value of int at an index
  * @n: input long integer
  * @index: index to start at
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	unsigned long int mask;

	mask = 1 << index;
	bit_val = n & mask;
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return (bit_val ? 1 : 0);
}
