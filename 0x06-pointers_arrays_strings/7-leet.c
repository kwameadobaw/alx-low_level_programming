#include "main.h"
/**
 * leet - encodes a string to leetcode
 *
 * @str: The string to be converted
 *
 * Return: Return the converted string
 */
char *leet(char *str)
{
	char *x = str;
	char alpha[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {4, 3, 0, 7, 1};
	int y = 0;

	while (*str != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (*str == alpha[y] || *str == alpha[y] - 32)
				*str = num[y] + '0';
		}
		str++;
	}
	return (x);
}
