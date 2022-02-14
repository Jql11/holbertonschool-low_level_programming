#include "main.h"
#include <stdio.h>

/**
 *print_array - print array
 *@a: integer
 *@n: integer
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}