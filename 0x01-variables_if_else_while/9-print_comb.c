#include <stdio.h>
/**
 *main - entry point of our prg
 *
 *Return: 0 if sucess
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
