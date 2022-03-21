#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_number - print numbers 0-14, 10 times.
 * @d0 - 1st decimal place
 * @d1 - 2nd decimal place
 * Return: numbers.
 **/

void print_number(int n)
{
	int d0;
	int d1;
	int d1tmp;
	int d2;
	int d2tmp;
	int d3;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	if (n <= 0 && n < 10)
	{
		d0 = n;
	}
	else if ((n >= 10) && (n < 100))
	{
		d1 = n / 10;
		d0 = n % 10;
		_putchar(d1 + '0');
	}
	else if ((n >=100) && (n < 1000))
	{
		d2 = n / 100;
		d1tmp = n % 100;
		_putchar(d2 + '0');

		d1 = d1tmp / 10;
		d0 = d1tmp % 10;
		_putchar(d1 + '0');
	}
	else
	{
		d3 = n / 1000;
		d2tmp = n % 1000;
		_putchar(d3 + '0');

		d2 = d2tmp / 100;
		d1tmp = d2tmp % 100;
		_putchar(d2 + '0');

		d1 = d1tmp / 10;
		d0 = d1tmp % 10;
		_putchar(d1 + '0');

	}

	_putchar(d0 + '0');
}
