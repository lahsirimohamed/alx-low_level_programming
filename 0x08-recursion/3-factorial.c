#include <stdio.h>
#include "main.h"

/**
 * factoriel-the factorial of a given number.
 * @n: integer
 * Return: facturiel of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 0)
	{
		int m = factorial(n - 1);
		
		return (n * m);
	}
	return (-1);
}
