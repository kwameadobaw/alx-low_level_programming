#include "main.h"
/**
  * create_file - creates a file with rw------- permissions
  * @filename: name of the file, if NULL, return -1
  * @text_content: contents of the file. If NULL, create an empty file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int newfile, length, n;

	if (filename == NULL)
		return (-1);
	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(newfile);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	n = write(newfile, text_content, length);
	if (close(newfile) == -1)
		return (-1);
	return (n == -1 ? -1 : 1);
}
