#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers 0-14, 10 times.
 *
 * Return: numbers.
 */

void more_numbers(void)
{
	char i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			char a;

			a = j + '0';
			_putchar(a);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
