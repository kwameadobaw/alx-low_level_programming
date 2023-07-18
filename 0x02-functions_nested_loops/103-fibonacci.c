#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum = 0;
	int limit = 4000000;
	int next_term;

	while (num1 <= limit)
	{
		if (num1 % 2 == 0)
		{
			sum = sum + num1;
		}
		next_term = num1 + num2;

		num1 = num2;
		num2 = next_term;
	}
	printf("%d\n", sum);
	return (0);
}
