#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: to be cated on
 * @src: to be cated
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (dest[i] != '\0')
	{
		len += 1;
	}
	
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[len + j] = src[j];
	}
        dest[len + j] = '\0';
        return (dest);
}
