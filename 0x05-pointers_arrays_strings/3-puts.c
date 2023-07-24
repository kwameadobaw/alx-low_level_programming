#include "main.h"
/**
 * _puts - Prints a string
 *
 * @str: Pointer to the string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		*str++;
	}
	putchar('\n');
}
