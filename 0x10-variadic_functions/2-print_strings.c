#include "variadic_functions.h"
/**
  * print_strings - print a list of strings
  * @separator: characters used to separate
  * @n: number of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *words;
	va_list print_words;

	va_start(print_words, n);

	for (a = 0; a < n; a++)
	{
		words = va_arg(print_words, char *);

		if (words != NULL)
			printf("%s", words);
		else
			printf("(nil)");
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_words);
}
