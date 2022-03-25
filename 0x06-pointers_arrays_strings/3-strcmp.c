#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1: to be cated on
 * @s2: to be cated
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
