#include "main.h"


/**
 * _strncat - concatenates two strings
 * @dest: to be cated on
 * @src: to be cated
 *@n: no. of byte to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n < j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n > 0)
		dest[i] = '\0';
	return (dest);
}
