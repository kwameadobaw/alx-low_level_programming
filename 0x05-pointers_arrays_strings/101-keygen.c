#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 5
/**
 * generate_password - Generates random password
 *
 * main - Entry point
 *
 * Return: Always 0
 */
char *generate_password()
{
	char *password = malloc(PASSWORD_LENGTH + 1);
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int character = rand() % 95;

		password[i] = (character < 26) ? 'a' + character : '0' + character - 26;
	}

	password[PASSWORD_LENGTH] = '\0';
	return (password);
}

int main(void)
{
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		char *password = generate_password();

		printf("%s\n", password);
		free(password);
	}
	return (0);
}
