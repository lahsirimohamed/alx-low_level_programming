#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	unsigned long int i;
	char *nstr;

	if (str == NULL)
		return (NULL);
	nstr = malloc(sizeof(str) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < sizeof(str); i++)
		nstr[i] = str[i];
	return (nstr);
}
