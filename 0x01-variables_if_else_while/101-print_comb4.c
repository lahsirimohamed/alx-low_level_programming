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
int l;
for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
for (l = m + 1; l < 10; l++)
{
putchar(n + '0');
putchar(m + '0');
putchar(l + '0');
if (n != 7 || m != 8 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
