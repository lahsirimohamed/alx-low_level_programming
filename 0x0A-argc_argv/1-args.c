#include <stdio.h>
#include "main.h"

/**
 * main-print number àof args
 * @argc: number of arg
 * @argv: array of args
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	(void) argv;/* ignoring argv*/ 
	printf("%d\n", argc - 1);

	return (0);
}
