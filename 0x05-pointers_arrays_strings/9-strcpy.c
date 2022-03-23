#include "main.h"

/**
 * _strcpy - print a string in reverse.
 * @dest: buffer
 * @src: to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		len += 1;
		i++;
	}
	for (j = 0; j <= len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
