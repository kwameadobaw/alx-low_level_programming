#include <stdio.h>
/**
 * main - Entry point
 *
 * @count: The number of times it should print
 *
 * print_fibonacci_sequence: Print Fibonacci sequence
 *
 * Return: Always 0 (Suceess)
 */
void print_fibonacci_sequence(int count)
{
	int num1 = 1;
	int num2 = 2;
	int result;
	int i;

	printf("%d, %d", num1, num2);
	for (i = 3; i <= count; i++)
	{
		result = num1 + num2;
		printf(", %d", result);
		num1 = num2;
		num2 = result;
	}
	printf("\n");
}
int main(void)
{
	int count = 98;

	print_fibonacci_sequence(count);

	return (0);
}
