#include "main.h"
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res;
	unsigned int count;

	xor_res = n ^ m;
	count = 0;
	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}
	return (count);
}
