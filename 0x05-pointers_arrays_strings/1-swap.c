nclude "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: swap 1
 * @b: swap 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
