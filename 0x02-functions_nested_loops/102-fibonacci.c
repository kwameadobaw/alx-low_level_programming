#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int a = 1;
	long b = 1, c = 2;

	while (a <= 50)
	{
		if (a == 1)
			printf("%ld", b);
		else if (i == 2)
			printf(", %ld", c);
		else
		{
			c = c + b;
			b = c - b;
			printf(", %ld", c);
		}

		++a;
	}

	printf("\n");
	return (0);
}
