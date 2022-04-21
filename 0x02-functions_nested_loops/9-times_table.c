#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: o
 */
void times_table(void)
{
	int i, j, q = 0, r = 0, mul = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				q = mul / 10;
				r = mul % 10;
				_putchar(q + '0');
				_putchar(r + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
