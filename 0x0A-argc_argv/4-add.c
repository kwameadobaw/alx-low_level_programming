#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_int - checks for valid input
 * @argc: argument count
 * @x: counter for argv[]
 * @y: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int check_int(int argc, int x, unsigned int y, char *argv[])
{
	for (x = 1; x <= argc; x++)
		for (y = 0; *argv[x] != '\0' && y < strlen(argv[x]); y++)
			if (isdigit(argv[x][y]) == 0)
				return (1);
	return (0);
}
/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (check_int(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
