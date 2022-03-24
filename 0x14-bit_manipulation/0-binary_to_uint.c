#include "main.h"
#include <stdio.h>
/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: is pointing to a string of 0 and 1 chars
  *Return: the converted number or 0 if b is null
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		val = val << 1;
		val = val + b[i] - '0';
		i++;
	}
	return (val);
}
/*
*unsigned int binary_to_uint(const char *b)
*{
*	int i = 0;
*	unsigned int k, sum = 0;
*	unsigned int len = 0;
*
*	if (b == NULL)
*		return (0);
*	while (b[i] != '\0')
*	{
*		i++;
*		len++;
*		if (b[i] != '0' && b[i] != '1')
*			return (0);
*	}
*	k = 0;
*	for (i = len - 1; i >= 0; i--)
*	{
*		if (b[i] == '1')
*		{
*			sum = sum + (1<<k);
*		}
*		k++;
*	}
*	return (sum);
*}
*/

