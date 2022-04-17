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
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
