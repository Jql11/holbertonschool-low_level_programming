#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks for alphabet
 *@c: character to check
 *Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);

	} else
	{
		return (0);
	}

}

