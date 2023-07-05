#include <stdio.h>
#include "main.h"

/**
 * is_prime_number-check for prime numbers
 * @n: the number to check
 * Return:1 if the input is a prime number else return 0
 */

int is_prime_number(int n)
{
	return (prime_iteration(n, 1));
}

/**
 * prime_iteration-return if its a prime number
 * @n:input
 * @i: iterations
 * Return: if its a prime number
 */

int prime_iteration(int n, int i)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		if (n % i == 0)
			return (i);
		else
			return (prime_iteration(n, i + 1));
	}
	return (0);
}

