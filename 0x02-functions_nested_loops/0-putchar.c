#include "main.h"
#include <stdio.h>

/**
 * main - print _putchar
 *
 * Return: o
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
