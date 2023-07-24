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
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	_putchar('\n');
}
