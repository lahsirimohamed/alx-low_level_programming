#include <stdio.h>

/**
 * main-print name of the file it was compiled from
 * Return: 0 always
 */


int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
