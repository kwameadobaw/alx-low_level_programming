#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int ac, char **av)
{
	int a;
	int total_length = 0;
	char *result;
	int current_position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		total_length += strlen(av[a]) + 1;
	}
	result = (char *) malloc(total_length * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		strcpy(result + current_position, av[a]);
		current_position += strlen(av[a]);
		result[current_position] = '\n';
		current_position++;
	}
	result[current_position] = '\0';
	return (result);
}
