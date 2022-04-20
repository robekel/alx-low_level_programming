#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: to be checked
 *
 * Return: o
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
