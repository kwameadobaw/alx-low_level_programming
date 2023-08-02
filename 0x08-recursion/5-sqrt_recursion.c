/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int checker(int a, int base)
{
	if (a * a == base)
		return (a);
	if (a * a > base)
		return (-1);
	return (checker((n + 1), base));
}
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
