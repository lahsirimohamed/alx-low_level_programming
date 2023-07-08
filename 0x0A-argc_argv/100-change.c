#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-prints the minimum number of coins to make change
 * @argc:number of arg
 * @argv:array of arg
 * Return:0 if success
 */


int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coint[5] = {25, 10, 5, 2, 1};
	int change = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (cents <= 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		for (i = 0; i < 5 && cents >= 0; i++)
		{
			change += cents / coint[i];
			cents %= coint[i];
		}

		printf("%d\n", change);
		return (0);
	}
	return (0);
}
