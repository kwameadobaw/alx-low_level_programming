#include "main.h"
/**
 * _string_length_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _string_length_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _string_length_recursion(s));
	}
	return (0);
}
/**
 * check_palindrome - helper function for is_palindrome
 * @str: the string
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int check_palindrome(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (check_palindrome(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = _string_length_recursion(s);
	int count = 0;

	return (check_palindrome(s, len - 1, count));
}
