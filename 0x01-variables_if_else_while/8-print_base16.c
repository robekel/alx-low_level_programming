#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: int
 */
int main(void)
{
	int n;

	n = 0x00;
	while ((n % 16 ) == n)
	{
		printf("%x", n);
		n++;
	}
	printf("\n");

	return (0);
}
