#include <stdio.h>
#include <stdlib>
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
	char *conc;
	char *len1 = s1;
	char *len2 = s2;

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
	conc = malloc((m + 1) + (n + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < n + m; i++)
	{
		if (i < n)
			conc[i] = s1[i];
		else
			conc[i] = s2[i - n];
	}
	conc[n + m] = '\0';
	return (conc);
}
