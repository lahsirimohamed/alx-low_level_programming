#include <stdio.h>
/**
 *main - entry point of our prg
 *
 *Return: 0 if success
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
