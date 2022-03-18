#include <ctype.h>
#include <stdio.h>

/**
 * _isupper  - check if uppper case.
 *
 * Return: result.
 */

int _isupper(int c)
{
	int result;

	if (isupper(c) == 0)
		result = 0;
	else
		result = 1;

	return result;

}
