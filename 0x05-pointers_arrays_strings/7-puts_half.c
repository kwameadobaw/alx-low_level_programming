#include "main.h"
/**
 * puts_half - Prints secod half of a string
 *
 * @str: The string that is to be printed
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}
	start_index = (length - 1) / 2 + 1;
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
