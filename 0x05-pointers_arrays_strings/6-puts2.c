#include "main.h"

/**
 * puts2 - reverse string
 * @str: string to be reversed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' / 2; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
