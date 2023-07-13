#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat-concatenates two strings.
 * @s1:string to conc
 * @s2:string to conc
 * @n: the first n bytes of s2
 * Return:pointer to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *tst1 = s1;
	char *tst2 = s2;
	unsigned int k = 0, l = 0, i, j, m;

	if (s1 == NULL)
		return (string_nconcat("", s2, n));
	if (s2 == NULL)
		return (string_nconcat(s1, "", n));
	while (*tst1)
	{
		k++;
		tst1++;
	}
	while (*tst2)
	{
		l++;
		tst2++;
	}
	if (n >= l)
		m = l;
	else
		m = n;
	str = malloc((k + m + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		str[i] = s1[i];
	for (j = 0; j < m; j++)
		str[k + j] = s2[j];
	str[k + m] = '\0';
	return (str);
}
