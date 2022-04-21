#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: table size
 * Return: table
 */
void print_times_table(int n)
{
	int i, j, r = 0, mul = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul >= 0 && mul < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			if (mul >= 10 && mul < 100)
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (mul >= 100)
			{
				r = mul % 100;
				_putchar((mul / 100) + '0');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
