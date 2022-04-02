#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of passed arguments
 * @argv: an array of passsed arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, __attribute__((unused)) char  **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
