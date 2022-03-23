#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: s
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;
	int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
