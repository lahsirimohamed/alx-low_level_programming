#include <stdio.h>

/**
 * main - the sum of the even-valued terms
 * Return: 0 if succes
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", sum);

	return (0);
}

