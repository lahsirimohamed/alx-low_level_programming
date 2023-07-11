#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int i;
	int n = 0;
	char *nstr;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		n++;
		str++;
	}
	nstr = malloc((n + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		nstr[i] = str[i];
	nstr[n]='\0';
	return (nstr);
}
