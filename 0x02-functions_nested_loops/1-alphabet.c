#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print the lowercase aalphabet letters
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
