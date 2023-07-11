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
	int i;
	int j;
	int l;
	char *str;
	char **conc;

	if (ac == 0 || av == NULL)
		return (NULL);

	conc = malloc(ac * sizeof(char *));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l = 0;
		*str = *av[i];
		while (*str)
		{
			l++;
			str++;
		}
		conc[i] = malloc((l + 1) * sizeof(char));
		if (conc[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(conc[j]);
			free(conc);
			return (NULL);
		}
		for (j = 0; j < l; j++)
		{
			conc[i][j] = av[j];
		}
		conc[i][l] == '\n';
	}
	return (conc);
}
