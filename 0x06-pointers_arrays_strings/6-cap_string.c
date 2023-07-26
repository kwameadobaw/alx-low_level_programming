#include "main.h"
/**
 * cap_string - Used to capitalize words of a string
 *
 * @str: The input string
 *
 * Return: Return the new string
 */
char *cap_string(char *str)
{
	int x;
	int y;
	int trigger;
	char separator[] = ",;.!?(){}\n\t\" ";

	for (x = 0, trigger = 0; str[x] != '\0'; x++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
	}
	for (y = 0; separator[y] != '\0'; y++)
	{
		if (separator[y] == str[x])
			trigger = 1;
	}
	if (trigger == 1)
	{
		if (str[x] > 96 && str[x] < 123)
		{
			str[x] -= 32;
			trigger = 0;
		}
		else if (str[x] > 64 && str[x] < 91)
		{
			trigger = 0;
		}
		else if (str[x] > 47 && str[x] < 58)
		{
			trigger = 0;
		}
	}
	return (str);
}
