#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: the integer
 */

int _atoi(char *s)
{
	int signe = 1;
	int num = 0;
	int beg = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			if (beg == 0)
				beg = 1;
			num = num * 10 + (*s + '0');
		}
		else
		{
			if (beg != 0)
				break;
			if (*s == '-' || *s == '+')
			{
				if (*s == '-')
					signe = -1;
			}
			else
			{
				s++;
				continue;
			}
		}
		s++;
	}
	return (num * signe);
}

