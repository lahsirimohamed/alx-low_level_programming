#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@n: the number to be treated
 *Return: last digit
 */
int print_last_digit(int n)
{
int a;
a = n % 10;
if (a < 0)
a *= -1;
return (a);
}
