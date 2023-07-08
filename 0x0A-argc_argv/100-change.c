#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("%d\n",0);
		return (0);
	}

	int change = 0;
	int coint[5] = {1, 2, 5, 10, 25}

	for (i = 0; i < 5; i++)
	{
		change += cents / coint[i];
		cents %= coint[i];
	}

	print("%d\n", change);
	return (0);
}
