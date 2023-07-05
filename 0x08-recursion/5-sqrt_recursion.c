#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion-natural square root of a number.
 * @n: input
 * Return: natural square of n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_rec(n, 0));
}

/**
 * sqrt_rec- find the natural square root of a number
 * @n: input
 * @i: iteration number
 * Return: the square root of n
 */

int sqrt_rec(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n >= 0)
	{
		if (i * i == n)
			return (i);
		else if (i * i < n)
			return (sqrt_rec(n, i + 1));
		else if (i * i > n)
			return (-1);
	}
}
