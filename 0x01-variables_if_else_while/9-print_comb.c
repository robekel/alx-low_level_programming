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
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	printf("\n");

	return (0);
}
