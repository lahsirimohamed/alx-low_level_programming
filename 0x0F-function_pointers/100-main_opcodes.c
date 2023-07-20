#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main-prints the opcodes of its own main function.
 * @argc:number of arg
 * @argv:array of arguments
 * Return: 0 if success
 */


int main(int argc, char *argv[])
{
	int bytes, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
