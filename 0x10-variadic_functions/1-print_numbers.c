#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
		separator = "";
	for (x = 0; x < n; x++)
	{
		if (x > 0)
			printf("%s", separator);
		printf("%d", va_arg(numbers, int));
	}
	va_end(numbers);
	printf("\n");
}
