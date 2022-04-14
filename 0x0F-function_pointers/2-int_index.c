#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: pointer to the array
 * @size:  size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: noting
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int v;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		v = cmp(array[i]);
		if (v != 0)
		{
			return (i);
			break;
		}
	}
	if (i == size - 1)
		return (-1);
	return (0);
}
