#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow- that splits a string into words.
 * @str: string to split
 * Return: pointer to the string
 */


char **strtow(char *str)
{
	int i;
	int j;
	int k = 0;
	int c = 0;
	int l = 0;
	char **array;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			l++;
		}
	}

	array = malloc ((l + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			for (j = i ; j >= 0; j--)
			{
				if (str[j] == ' ')
				k = j;
				break;
			}
			array[c] = malloc((i - k + 1) * sizeof(char));
			if (array[c] == NULL)
			{
				for (j = 0; j < c; j++)
				{
					free(array[j]);
				}
				free(array);
				return (NULL);
			}

			for (j = 0; j < k - i; j++)
			{
				array[c][j] = str[j + i];
			}
			array[c][k - i] = '\n';
			c++;
		}
	}
	array[c][l] = '\n';
	return (array);
}
