#include "main.h"

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file to
 * @argv: arguments vector.
 */
void file_exist(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, closeFile;
	ssize_t readFile, writeFile;
	char *buf[1024];
	size_t nbyte = 1024;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	file_exist(file_from, file_to, argv);

	while (nbyte)
	{
		readFile = read(*argv[1], buf, nbyte);
		if (readFile == -1)
			file_exist(-1, 1, argv);
		writeFile = write(*argv[2], buf, nbyte);
		if (writeFile == -1)
			file_exist(1, -1, argv);
	}
	closeFile = close(file_from);
	if (closeFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	closeFile = close(file_to);
	if (closeFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
