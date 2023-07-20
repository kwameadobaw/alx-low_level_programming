#include "main.h"
/**
 * _isupper - checks for uppercase letters
 *
 * @c: alphabet to be checked
 *
 * Return: Return 1 if alphabet is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
