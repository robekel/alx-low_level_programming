#include <limits.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_number(INT_MAX);
	_putchar('\n');
/**	print_number(INT_MIN);
 *	_putchar('\n');
 */
	print_number(123456789);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
