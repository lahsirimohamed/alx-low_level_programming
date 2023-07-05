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
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
}
