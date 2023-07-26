#include "main.h"
/**
 * string_toupper - Converts a string to uppercase
 *
 * @str: The string to be converted
 *
 * Return: Return the converted string
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 'a' + 'A';
		}
	}
	return (str);
}
