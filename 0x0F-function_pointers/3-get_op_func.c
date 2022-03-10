#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - select correct function to perform the operation
 * @s: operaotr passed as argument to the program
 * Return: returns function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
