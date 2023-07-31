#include "main.h"
/**
 * _memset - Fills n bytes of memory
 *
 * @s: A pointer to the memory area that
 * needs to be filled with a constant byte
 * @b: The constant byte to be written to the memory area
 * @n: The number of bytes to be filled with the constant byte b
 * Return: The new string
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
