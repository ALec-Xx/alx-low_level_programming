#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	
	if (!filename)
		return (0);
	else
		file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	readFile = read(file, buf, letters);
	if (readFile == -1)
	{
		free(buf);
		return (0);
	}
	dprintf(file, "%s", gets(filename));

	close(file);
	return (readFile);
}
