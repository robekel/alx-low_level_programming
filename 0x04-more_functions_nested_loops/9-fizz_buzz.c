#include <stdio.h>

/**
 * main - print numbers 0-9.
 *
 * Return: numbers.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 100)
		{
			if (((i % 3) == 0) && ((i % 5) != 0))
				printf("Fizz ");
			else if (((i % 5) == 0) && ((i % 3) != 0))
				printf("Buzz ");
			else if (((i % 3) == 0) && ((i % 5) == 0))
				printf("FizzBuzz ");
			else
				printf("%d ", i);
		}
		else
		{
		        if (((i % 3) == 0) && ((i % 5) != 0))
				printf("Fizz");
			else if (((i % 5) == 0) && ((i % 3) != 0))
				printf("Buzz");
			else if (((i % 3) == 0) && ((i % 5) == 0))
				printf("FizzBuzz");
			else
				printf("%d", i);

		}
	}          
	printf("\  n");
                   
	return (0);
}
