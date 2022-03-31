#include "main.h"

/**
 * is_palindrome - prints the factrial of a given number
 * @s: input string
 * @len: length of the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while(s[i] != '\0')
	{
		len += 1;
		i++;
	}

	for (j = 0; j < len; j++)
	{
		if (s[j] != s[len - j - 1])
			return (1);
		else
			return (0);
	}
}
