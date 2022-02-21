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
	int row, i;
	int sum1 = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum1 = sum1 + a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}

