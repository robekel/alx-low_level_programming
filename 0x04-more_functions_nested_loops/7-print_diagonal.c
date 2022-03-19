#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print numbers 0-9.
 * @n: number of times to print
 *
 * Return: numbers.
 */

void print_diagonal(int n)
{
	char i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}

	}
}
