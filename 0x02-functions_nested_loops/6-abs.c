#include "main.h"
#include <ctype.h>
/**
 *_abs - the absolute value of an integer.
 *@x: integer
 *Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}

