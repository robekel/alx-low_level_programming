#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * more_numbers - print numbers 0-14, 10 times.
 *
 * Return: numbers.
 **/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{

			_putchar('0' + j);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
