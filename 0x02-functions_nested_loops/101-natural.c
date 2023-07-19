#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Return the sum of multiples
 */
int main(void)
{
	int a;
	int sum = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n");
	return (0);
}
