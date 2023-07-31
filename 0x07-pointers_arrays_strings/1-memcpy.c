#include "main.h"
/**
 * _memcpy - Copies characters from src to dest
 * @src: The source
 * @dest: The destination
 * @n: Number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[n] = src[n];
	}
	return (*dest);
}
