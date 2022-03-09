#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - check the code
 *@argc: number of arguments
 *@argv[]: pointer array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{	
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	}
	return (0);

}
