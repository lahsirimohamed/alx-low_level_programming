#include <stdio.h>
/**
 *main - entry point to our prg
 *
 *Return: 0 if succces
 */
int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - print the lowercase aalphabet letters
 */
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar('i');
}
putchar('\n');
}
