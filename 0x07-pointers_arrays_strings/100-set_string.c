#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 *@s: double pointer
 *@to: char
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
