#include <stdio.h>
#include "main.h"

/**
 * main-print number àof args
 * @args: number of arg
 * @argv: array of args
 * Return: 0 if succes
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
