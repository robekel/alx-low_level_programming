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
	int i = 10;
	int j = 0;
	int num = 0;
	int tmp;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	tmp = n;
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		while (n % i != n)
		{
			i *= 10;
		}

		j = i / 10;
		while (n % i != 0)
		{
			num = tmp / j;
			tmp = tmp % j;
			_putchar(num + '0');
			j /= 10;
			i /= 10;
		}
	}
}
