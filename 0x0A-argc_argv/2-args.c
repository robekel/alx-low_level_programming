#include "main.h"
#include <stdio.h>

/**
 * main - prints all argumentsit recives
 * @argc: the number of passed arguments
 * @argv: an array of passsed arguments
 *
 * Return: 0 on success
 */

int main(int argc, char  **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
