#include "main.h"
#include <stdio.h>

/**
 * _islower -  checks for lowercase character.
 * a new line.
 * @c: to be checked
 *
 * Return: o
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}
