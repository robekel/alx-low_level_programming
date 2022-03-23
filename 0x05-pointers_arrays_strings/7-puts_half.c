#include "main.h"

/**
 * puts_half - reverse string
 * @str: string to be reversed
 */

void puts_half(char *str)
{
	int i;
	int len;
	int n;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len += 1;
		i++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
