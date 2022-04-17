#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: int
 */
int main(void)
{
	int n;

	n = 0;
	while ((n % 10) == n)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
