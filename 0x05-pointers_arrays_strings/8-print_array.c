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

	if (n > 0)
	{
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
			printf(", %d", a[i]);
	}
	printf("\n");
}
