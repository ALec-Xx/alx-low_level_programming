#include "main.h"


int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t nbyte;
	ssize_t writeFile;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[nbyte] != '\0')
		{
			nbyte++;
			writeFile = write(filename, text_content, nbyte);
			if  (writeFile == -1)
			{
				close(file);
				write(STDOUT_FILENO, "fails", 5);
				return (-1);
			}
	}
	close(file);

	return(1);
}
