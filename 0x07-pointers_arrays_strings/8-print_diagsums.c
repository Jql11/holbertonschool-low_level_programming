#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonal
 *@a: pointer to an array
 *@size: size of the matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

