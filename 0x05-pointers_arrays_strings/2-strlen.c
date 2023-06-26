#include <stdio.h>
#include "main.h"

/**
 * _strlen-the length of a string
 * @s:string to test
 * Return: lenght of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
