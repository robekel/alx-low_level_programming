#include "main.h"

/**
 * factorial - prints the factrial of a given number
 * @n: input number
 *
 * Return: -1 if error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));
	}
}
