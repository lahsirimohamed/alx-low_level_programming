#include <string.h>
#include <unistd.h>
/**
 *main - entry point
 *
 *Return: 1 if success
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
return(1);
}