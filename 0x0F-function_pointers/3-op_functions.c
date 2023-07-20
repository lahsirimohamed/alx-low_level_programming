#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add-eturns the sum of a and b
 * @a:integer
 * @b:integer
 * Return:sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub-diffrence of a and b
 * @a:integer
 * @b:integer
 * Return:defrence beteween a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul-product of a and b
 * @a:integer
 * @b:integer
 * Return:product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div-division of a by b
 * @a:integer
 * @b:integer
 * Return:division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod-reminder of division of a by b
 * @a:integer
 * @b:integer
 * Return:rminder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
