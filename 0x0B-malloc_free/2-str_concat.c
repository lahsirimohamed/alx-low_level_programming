#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat- that concatenates two strings.
 * @s1:string 
 * @s2:string
 * Return: pointer to the new concatnation
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i;
	int n = 0;
	int m = 0;
	char *len1 = s1;
	char *len2 = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*len1)
	{
		n++;
		len1++;
	}
	while (*len2)
	{
		m++;
		len2++;
	}
	conc = malloc((m + n + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < m; i++)
	{
		conc[i + n] = s2[i];
	}
	conc[n + m] = '\0';
	return (conc);
}
