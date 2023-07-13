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
	unsigned int k = 0, l = 0, i, j;

	if (s1 == NULL)
		return (string_nconcat(NULL, s2, n));
	if (s2 == NULL)
		return (string_nconcat(s1, NULL, n));
	while (*s1)
		k++;
	k++;
	while (*s2)
		l++;
	l++;
	if (n >= l)
		n = l;
	str = malloc((k + n - 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < k - 1; i++)
		str[i] = s1[i];
	for (j = 0; j < n - 1; j++)
		str[k - 1 + j] = s2[j];
	str[k + n - 2] = '\n';
	return (str);
}
