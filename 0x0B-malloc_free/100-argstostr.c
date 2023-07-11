#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr-concatenates all the arguments of your program.
 * @ac:size of arg
 * @av:array of arg
 * Return: apointer to the string
 */

char *argstostr(int ac, char **av)
{
	int *array;
	int i;
	int j;
	int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			l++;
	l += ac;
	array = malloc(sizeof(char) * (l + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i][j] == '\0')
		{
			array[c] = '\n';
			c++;
		}
		else
		{
			for (j = 0; av[i][j]; j++)
			{
				array[c] = av[i][j];
				c++;
			}
		}
	}
	return (array);
}
