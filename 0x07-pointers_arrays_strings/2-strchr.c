#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate a character in a string
 * @s: The string to be checked
 * @c: The characrer to be checked
 * Return: The new string with the checked character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
