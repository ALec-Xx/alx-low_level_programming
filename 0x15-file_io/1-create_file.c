#include "main.h"


int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writeFile;
	size_t nbyteb = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	while (text_content[nbytes] != '\0')
	{
		if (text_content == NULL)
			file = open(filename, O_TRUNC);
		nbytes++;
		writeFile = write(file, text_content, nbyte);
		if (writeFile == -1)
			return (-1);
	}

	close(file);
	return (1);
}
