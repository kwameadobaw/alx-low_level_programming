#include "main.h"
/**
 * infinite_add - Used to add integers
 * @n1: points to the first input
 * @n2: points to the second input
 * @r: points to the buffer
 * @size_r: The size of the buffer
 * Return: Always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int idx1 = len1 - 1;
	int idx2 = len2 - 1;
	int result_idx = 0;
	int digit_sum;
	int remainder;
	int i;
	char temp;

	if (len1 > size_r - 1 || len2 > size_r - 1)
	{
		return (0);
	}
	while (idx1 >= 0 || idx2 >= 0 || carry)
	{
		digit_sum = carry;
		if (idx1 >= 0)
		{
			digit_sum += n1[idx1] - '0';
			idx2--;
		}
		carry = digit_sum / 10;
		remainder = digit_sum % 10;
		if (result_idx >= size_r - 1)
		{
			return (0);
		}
		r[result_idx] = remainder + '0';
		result_idx++;
	}
	r[result_idx] = '\0';
	for (i = 0, j = result_idx - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
