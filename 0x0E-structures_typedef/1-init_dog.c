#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialise a varaible of type struct dog
 *@d: a variable of type struct dog
 *@name: name
 *@age: age
 *@owner: owner
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
