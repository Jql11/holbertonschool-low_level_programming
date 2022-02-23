#include "main.h"
#include <stdio.h>
/**
  *is_prime - find prime number
  *@i: divider
  *@n: integer
  */

int is_prime(int i, int n)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(i + 1, n));
}

/**
 * _prime_number - find prime number
 *@n: integer
 * Return: if is prime, return 1 otherwise 0
*/ 
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(2, n));
}

