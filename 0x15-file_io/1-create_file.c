#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writeFile;
	size_t nbyte = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[nbyte] != '\0')
			nbyte++;
		writeFile = write(file, text_content, nbyte);
		if (writeFile == -1)
			return (-1);
	}

	close(file);
	return (1);
}
