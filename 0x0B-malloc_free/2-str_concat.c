#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_concatenate;
	size_t len1, len2, total_length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_length = len1 + len2 + 1;
	ptr_concatenate = (char *) malloc(total_length * sizeof(char));
	if (ptr_concatenate == NULL)
	{
		return (NULL);
	}
	strcpy(ptr_concatenate, s1);
	strcat(ptr_concatenate, s2);
	return (ptr_concatenate);
}
