#include <stdio.h>
#include "main.h"

/**
 * set_string-sets the value of a pointer to a char.
 * @s:pointer to pointer
 * @to: pointer
 * Return: no return value
 */

void set_string(char **s, char *to)
{
	*s = to;
}

