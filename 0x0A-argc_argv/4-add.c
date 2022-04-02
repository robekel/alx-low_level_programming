#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: the number of passed arguments
 * @argv: an array of passsed arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char  **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
