#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: 1st parameter
 * @name: 2nd parameter
 * @age: 3rd parameter
 * @owner: 4th parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
