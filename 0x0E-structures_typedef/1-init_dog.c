#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize type struct dog
 *
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
