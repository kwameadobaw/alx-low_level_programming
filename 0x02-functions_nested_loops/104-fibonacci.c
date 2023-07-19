#include <stdio.h>
/**
 * main - Entry point
 *
 * print_fib_sequence - Print the Fibonacci sequence up to limit
 *
 * @limit: the number of times to print sequence
 *
 * Return: Always 0 (Success)
 */
void print_fib_sequence(int limit)
{
	long long int a = 1, b = 2, c;
	int count = 0;

	printf("%lld, %lld", a, b);
	count += 2;

	while (count < limit)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
		count++;
	}

	printf("\n");
}

int main(void)
{
	int limit = 98;

	print_fib_sequence(limit);

	return (0);
}
