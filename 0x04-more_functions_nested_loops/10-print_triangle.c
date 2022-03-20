#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print numbers 0-9.
 * @n: number of times to print
 *
 * Return: numbers.
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int tmp = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = tmp ; j > 0; j--)
			{
				_putchar(' ');
			}

			for(k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			tmp -= 1;
			_putchar('\n');
		}

	}
}
