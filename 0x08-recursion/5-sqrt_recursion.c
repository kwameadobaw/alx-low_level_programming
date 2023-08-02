#include "main.h"
/**
 * checker - checks the input number from n to the base
 * @a: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int checker(int a, int base)
{
	if (a * a == base)
		return (a);
	if (a * a > base)
		return (-1);
	return (checker((a + 1), base));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
