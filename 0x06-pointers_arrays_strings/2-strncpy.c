#include "main.h"


/**
 * _strncpy - concatenates two strings
 * @dest: to be cated on
 * @src: to be cated
 * @n: no. of byte to be used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (n > j)
	{
		if (src[j] == '\0')
		{
			for (; j < n; j++)
			{
				dest[i] = '\0';
				i++;
			}

		}
		else
		{
			dest[i] = src[j];
			j++;
		}
	}
	return (dest);
}
