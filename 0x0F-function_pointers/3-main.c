#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: Pointer to array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int number_1, number_2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (number_2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2])(number_1, number_2)));
	return (0);
}
