#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: the string to print in reverse.
 */

void print_rev(char *s)
{
	int i;
	int tmp;

	i = 0;
	for (tmp = 0; s[tmp] != '\0'; tmp++)
	{

	}

	for (i = tmp - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
