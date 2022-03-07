#include <stdio.h>
#include "dog.h"
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
 * _strdup - a copy of the string
 *@str: string
 * Return: returns a pointer tothe duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	int length;
	int i;

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	length = _strlen(str);
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		p[i] = str[i];
	}
	return (p);
}


/**
 * new_dog - new dog
 *@name: member
 *@age: member
 *@owner: member
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->name = _strdup(name);
	p->owner = _strdup(owner);
	return (p);
}
