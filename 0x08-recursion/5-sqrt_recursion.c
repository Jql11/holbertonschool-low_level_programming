#include "main.h"
/**
*square - find the natural square root of a number
*@k: mutiplier
*@n: number
*Return: return value
*/

int square(int k, int n)
{
	if (k * k == n)
		return (k);
	else if (k * k > n)
		return (-1);
	else
		return (square(k + 1, n));
}

/**
 * _sqrt_recursion - the natural square root of a number
 *@n: integer
 * Return: returns the value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (square(1, n));
}
