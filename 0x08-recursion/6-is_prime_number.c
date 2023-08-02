#include "main.h"
/**
  * checker - checks recursively the input from is_prime_number
  * @a: iterator
  * @base: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int checker(int a, int base)
{
	if (base % a == 0 || base < 2)
		return (0);
	else if (a == base - 1)
		return (1);
	else if (base > a)
		return (checker(a + 1, base));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (checker(2, n));
}
