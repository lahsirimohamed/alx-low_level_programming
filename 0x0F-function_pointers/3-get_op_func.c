#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func-selects the correct function to perform
 * @s:operator
 * Return:pointer to the function correspondant
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t fun[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	while (fun[i].op != NULL && *(fun[i].op) != *s)
	{
		i++;
	}
	return (fun[i].f);
}
