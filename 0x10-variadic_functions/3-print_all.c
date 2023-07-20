#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all-prints anything.
 * @format:list of types of arguments passed to the function
 * Return:void
 */

void print_all(const char * const format, ...)
{
	va_list arr;

	char *array, *sep = " ";
	int i = 0;

	va_start(arr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arr, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arr, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arr, double));
					break;
				case 's':
					array = va_arg(arr, char *);
					if (!array)
						array = "(nil)";
					printf("%s%s", sep, array);
					break;
				default:
					i++;
	/				continue;
			}
			sep = ",";
			i++;
		}
	}
	printf("\n");
	va_end(arr);
}
