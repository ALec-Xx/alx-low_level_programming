#include "main.h"


void file_exist(int file_from, int file_to, **argv)
{
	if (file_from == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *argv[1]);
	}
	if (file_to == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", *agrv[2]);
	}
}

int main(argc, *argv[])
{
	int file_to, file_from;
	char *buf[1024];
	size_t nbyte = 1024;

	if (argc != 3)
	{
		exit(97);
		fprintf(stderr, "Usage: cp file_from file_to\n");
	}
	file_from = open(*argv[1], O_RDONLY);
	file_to = open(*argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);	file_exist(file_from, file_to, argv);

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
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	}
	closeFile = close(file_to);
	if (closeFile == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	}
	return(0);
}
