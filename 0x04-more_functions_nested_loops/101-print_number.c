#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_number - print numbers 0-14, 10 times.
 * @n: number to return
 *
 * Return: numbers.
 **/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num *= -1;
		_putchar('-');
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
