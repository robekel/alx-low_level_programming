#include "main.h"

/**
 * _pow_recursion - prints the power
 * @x: base no.
 * @y: power no.
 *
 * Return: -1 if error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
}
