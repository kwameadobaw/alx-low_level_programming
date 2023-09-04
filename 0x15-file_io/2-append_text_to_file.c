#include "main.h"
/**
  * append_text_to_file - appends text to a file
  * @filename: file to append to, if NULL, return -1
  * @text_content: content to append, if NULL, do not append
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, length, a;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEMD);
	if (append_file == -1)
		return (-1);
	if (text_content == -1)
		return (1);
	for (length = 0; text_content[length]; length++)
		;
	a = write(append_file, text_content, length);
	close(append_file);
	return (a == -1 ? -1 : 1);
}
