#include "main.h"
/**
 * rot13 - Prints string using Rot-13 encoding
 *
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	int x, y;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rotated = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (str[x] == alpha[y])
			{
				str[x] = rotated[y];
				break;
			}
		}
	}
	return (str);
}
