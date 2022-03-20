#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * more_numbers - print numbers 0-14, 10 times.
 * @d0 - 1st decimal place
 * @d1 - 2nd decimal place
 * Return: numbers.
 **/

void more_numbers(void)
{
	int i;
	int j;
	int d0;
	int d1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				d0 = j;
			}
			else
			{
				d1 = j / 10;
				d0 = j % 10;
				_putchar(d1 + '0');
			}

			_putchar(d0 + '0');
		}

		_putchar('\n');
	}
}
