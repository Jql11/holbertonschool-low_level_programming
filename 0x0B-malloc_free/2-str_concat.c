#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 *str_concat - concatenate two string
 *@s1: string 1
 *@s2: string 2
 * Return: return string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++, len1++)
	for (j = 0; *(s2 + j) != '\0'; j++, len2++)
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(p + i) = *(s1 + i);
	j = 0;
	while (j < len2)
	{
		*(p + i) = *(s2 + j);
		i++, j++;
	}

	return (p);
}
