#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 *
 * Return: -1 if error
 */

int is_prime_number(int n)
{
	int prime;

	prime = isPrime(n, n / 2);
	if (prime == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * isPrime - check if prime
 * @num: number
 * @i: checker
 *
 * Return: 1 if prime
 */

int isPrime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		isPrime(num, i - 1);
	}
}
