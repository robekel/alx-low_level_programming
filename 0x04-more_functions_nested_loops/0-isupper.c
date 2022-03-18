#include <ctype.h>
#include <stdio.h>

/**
 * _isupper  - check if uppper case.
 * @c: value to be checked
 *
 * Return: result.
 */

int _isupper(int c)
{

	if (isupper(c) == 0)
		return (0);
	else
		return (1);

}
