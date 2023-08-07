#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *ptr_duplicate;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	ptr_duplicate = (char *) malloc((len + 1) * sizeof(char));
	if (ptr_duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(ptr_duplicate, str);
	return (ptr_duplicate);
}
