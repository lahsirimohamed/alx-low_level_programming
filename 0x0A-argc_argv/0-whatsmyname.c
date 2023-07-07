#include <stdio.h>
#include "main.h"

/**
 * main-print name of the prg
 * @argc:number of args
 * @argv: array of args
 *
 * Return: 0 if success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s/n", argv[0]);
	return (0);
}
