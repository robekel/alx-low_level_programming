#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: int
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
				continue;
			if (i > j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}
