#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator:he string to be printed between numbers
 * @n:number of numbers
 * Return:void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(num);

	printf("\n");
}

