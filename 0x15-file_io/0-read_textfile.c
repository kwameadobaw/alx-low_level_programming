#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: number of characters to print
  * Return: 0 on success
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten < 0 || (ssize_t)bytesWritten != bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesRead);
}
