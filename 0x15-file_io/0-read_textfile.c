#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * read_textfile-reads a text file and prints it to the POSIX standard output
 * @filename:file
 * @letters:the number of letters it should read and print
 * Return:0 when failed and actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fil;
	ssize_t w1;
	ssize_t w2;
	ssize_t w3;

	w1 = open(filename, O_RDONLY);
	if (w1 == -1)
		return (0);
	fil = malloc(sizeof(char) * letters);
	if (fil == NULL)
	{
		close(w1);
		return (0);
	}
	w2 = read(w1, fil, letters);
	if (w2 == -1)
	{
		free(fil);
		close(w1);
		return (0);
	}
	w3 = write(STDOUT_FILENO, fil, w2);

	free(fil);
	close(w1);
	return (w3);
}
