#include <stdio.h>
/**
 *main - entry point of our prg
 *
 *Return: 0 if success
 */
int main(void)
{
int number = 0;
while (number < 10)
{
putchar(number + '0');
number += 1;
}
putchar('\n');
return (0);
}
