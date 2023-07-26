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
		if (str[0] >= 'a' && str[0] <= 'z')
			trigger = 1;
	}
	for (y = 0; separator[y] != '\0'; y++)
	{
		if (separator[y] == str[x])
			trigger = 1;
	}
	if (trigger == 1)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32;
			trigger = 0;
		else if (str[x] >= 'A' && str[x] <= 'Z')
			trigger = 0;
		else if (str[x] >= '0' && str[x] <= '9')
			trigger = 0;
	}
	return (str);
}
