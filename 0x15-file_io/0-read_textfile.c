#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t readFile, writeFile;

	if (!filename)
		return (0);
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
	writeFile = write(STDOUT_FILENO, buf, readFile);
	if (writeFile == -1 || readFile != writeFile)
	{
		free(buf);
		return (0);
	}
	free(buf);

	close(file);
	return (writeFile);
}
