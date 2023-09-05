#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit-handle error cases
 * @message:ointer to a constant character string
 */

void error_exit(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(1);
}

/**
 * main-reads the content of the source file
 * @argc:number of arg
 * @argv:array of arrg
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Can't read from file");
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Can't write to file");
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit("Can't write to file");
	}
	if (bytes_read == -1)
		error_exit("Can't read from file");
	if (close(fd_from) == -1)
		error_exit("Can't close file descriptor");
	if (close(fd_to) == -1)
		error_exit("Can't close file descriptor");
	return (0);
}
