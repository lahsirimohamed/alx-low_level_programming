#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings-prints strings, followed by a new line.
 * @separator:string to be printed between the strings
 * @n:number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int i;
	const char *tmpstr;

	va_start(str, n);

	tmpstr = va_arg(str, char);
	for (i = 0; i < n; i++)
	{
		if (tmpstr == NULL)
			printf("(nil)");
		else
			printf("%s", tmpstr);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
