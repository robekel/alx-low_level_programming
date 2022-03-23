#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;
	int tmp;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}

	for (j = 0; j < (len / 2); j++)
	{
		tmp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = tmp;
	}
}
