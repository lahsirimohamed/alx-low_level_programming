#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
char l;
int i;
for (i = 0; i < 10; i++)
{
for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
putchar('\n');
}
}
