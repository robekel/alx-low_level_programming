#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @n: to be checked
 *
 * Return: o
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
