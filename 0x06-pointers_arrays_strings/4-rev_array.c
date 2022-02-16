#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 *@a: am array of integer
 *@n: the number of elements to swap
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int *s;
	int *e;

	s = a;
	e = &a[n - 1];

	while (s < e)
	{
		tmp = *s;
		*s = *e;
		*e = tmp;
		s++;
		e--;
	}
}
