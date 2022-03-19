#include <stdio.h>
#include "main.h"

/**
 * print_line - print numbers 0-9.
 * @n: number of times to print
 *
 * Return: numbers.
 */

void print_line(int n)
{
	char i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
