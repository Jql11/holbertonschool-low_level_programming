#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: integer
 *Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


