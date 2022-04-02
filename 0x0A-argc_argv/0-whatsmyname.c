#include "main.h"
#include <stdio.h>

/**
 * main - prints the mane of the program
 * @argc: the number of passed arguments
 * @argv: an array of passsed arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(__attribute__((unused)) int argc, char  **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
