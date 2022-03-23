#include "main.h"

/**
 * puts2 - reverse string
 * @str: string to be reversed
 */

void puts2(char *str)
{
	int i;
	int j;
	int len;

	len = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		len += 1;
	}
	
	for (i = 0; i < len / 2; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i * 2]);
	}
	_putchar('\n');
}
