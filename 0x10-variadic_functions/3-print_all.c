#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list printall;
	char c;
	int i;
	float f;
	char *s;
	int comma = 0;
	const char *format_ptr = format;

	va_start(printall, format);

	while (*format_ptr != '\0')
	{
		switch (*format_ptr)
		{
			case 'c':
				c = va_arg(printall, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(printall, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(printall, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(printall, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		if (comma)
			printf(", ");
		comma = 1;
		format_ptr++;
	}
	va_end(printall);
	printf("\n");
}
