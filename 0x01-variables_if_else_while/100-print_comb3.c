#include <stdio.h>
/**
 *main - entry point of our prg
 *
 *Return: 0 if success
 */
int main(void)
{
int m;
int n;
for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar(n + '0');
putchar(m + '0');
if (n != 8 && m != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
