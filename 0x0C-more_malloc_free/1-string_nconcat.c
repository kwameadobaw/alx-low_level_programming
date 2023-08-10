#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	char *result;
	unsigned int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		length_s1++;
	for (a = 0; s2[a] != '\0'; a++)
		length_s2++;
	result = malloc((length_s1 + n) * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= length_s2)
	{
		for (a = 0; s1[a] != '\0'; a++)
			result[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			result[length_s1 + a] = s2[a];
		result[length_s1] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			result[a] = s1[a];
		for (a = 0; a < n; a++)
			result[length_s1 + a] = s2[a];
		result[length_s1 + a] = '\0';
	}
	return (result);
}
