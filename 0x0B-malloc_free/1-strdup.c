#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	long unsigned int i;
	char *nstr;

	if (str == NULL)
		return (NULL);
	nstr = malloc(sizeof(str));
	for (i = 0; i < sizeof(str); i++)
		nstr[i] = str[i];
	if (nstr == NULL)
		return (NULL);
	return(nstr);
}
