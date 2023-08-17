#include "variadic_functions.h"
/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	unsigned int sum;
	va_list numbers;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(numbers, n);

	for (num = 0; num < n; num++)
		sum = sum + va_arg(numbers, unsigned int);
	va_end(numbers);
	return (sum);
}
