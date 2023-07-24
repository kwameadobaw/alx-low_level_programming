#include "main.h"
/**
 * puts2 - Print every other number
 *
 * @str: the string in reference
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
