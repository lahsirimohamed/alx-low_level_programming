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
int p;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
for (l = n; l < 10; l++)
{
for (p = m + 1; p < 10; p++)
{
putchar(n + '0');
putchar(m + '0');
putchar(' ');
putchar(l + '0');
putchar(p + '0');
if (n != 9 || m != 8 || l != 9 || p != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
