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
	int num;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	num = n;
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
