#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of passed arguments
 * @argv: an array of passsed arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char  **argv)
{
	int sum;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);
}
