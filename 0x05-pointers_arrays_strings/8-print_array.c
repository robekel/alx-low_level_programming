#include "main.h"
#include <stdio.h>
/**
 * print_array - reverse string
 * @a: array first element
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (a[i] != a[n])
	{
		printf("%d", a[i]);
		if (a[i] == a[n - 1])
			break;
		printf(", ");
		i++;
	}
	printf("\n");
}
