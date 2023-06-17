#include <stdio.h>
/**
 *main - entry point for our prg
 *
 *Return: 0 if success
 */
int main(void)
{
int p = 0;
while (p < 16)
{
if (p < 10)
{
putchar(p + '0');
}
else
{
putchar(p - 10 + 'a');
}
p += 1;
}
return (0);
}
