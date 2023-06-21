#include <stdio.h>
#include "main.h"
/**
 *print_sign - checks for alphabetic character
 *@n: the number to be checked
 *Return: 1 if n > 0, 0 if n=0, -1 if n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
putchar('\n');
return (1);
}
if (n == 0)
{
putchar(48);
putchar('\n');
return (0);
}
if (n < 0)
{
putchar('-');
putchar('\n');
return (-1);
}
return (-1);
}
