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
	char *str, *tst1, *tst2;
	int k = 0, l = 0, m;

	if (s1 == NULL)
		return (string_nconcat('', s2, n));
	if (s2 == NULL)
		return (string_nconcat(s1, '', n));
	*tst1 = *s1;
	while (*tst1)
		k++;
	k++;
	*tst2 = *s2;
	while (*tst2)
		l++;
	l++;
	if (n >= l)
		m = l;
	if (n <= l)
		m = n;
	str = malloc((k + m - 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < k - 1; i++)
		str[i] = s1[i];
	for (j = 0; j < m - 1; j++)
		str[k - 1 + j] = s2[j];
	str[k + m - 2] = '\n';
	return (str);
}
