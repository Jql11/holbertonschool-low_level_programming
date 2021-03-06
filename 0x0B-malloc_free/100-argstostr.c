#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - returns the length of a string
 *@s: character
 *
 *Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
/**
 * argstostr - concatenates all the arguments of your program
 *@ac: the amount of the string
 *@av: pointer to the pointer of array
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int length = 0;
	char *p;
	int k = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length = length + _strlen(av[i]);
	}
	length = length + ac + 1;
	p = malloc(sizeof(*p) * length);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
