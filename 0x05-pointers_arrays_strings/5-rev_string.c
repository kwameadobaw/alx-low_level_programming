#include "main.h"
/**
 * rev_string - To reverse a string
 *
 * @s: The string to be reversed
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp_i;

	while (s[length] !0 '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp_i = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp_i;
	}
}
