#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit  - check if uppper case.
 * @c: value to be checked
 *
 * Return: result.
 */

int _isdigit(int c)
{

	if (isdigit(c) == 0)
		return (0);
	else
		return (1);

}
