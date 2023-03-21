#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog struct
 *
 * @d: pointer to struct name
 * Return: void
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL && d->age != 0 && d->owner != NULL)
{
printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
return;
}
else if (d->age == 0 && d->name != NULL && d->owner != NULL)
{
printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
return;
}
else if (d->owner == NULL && d->name != NULL && d->age != 0)
{
printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
return;
}
else if (d->name != NULL && d->age != 0 && d->owner != NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
return;
}
}
