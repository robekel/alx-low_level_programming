#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers 0-9.
 *
 * Return: numbers.
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
