#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog struct
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: dog_t*:
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int name_size = 0, owner_size = 0;
dog_t *newDog = malloc(sizeof(dog_t));
while (name[name_size])
name_size++;
while (owner[owner_size])
owner_size++;
if (newDog == NULL)
{
free(newDog);
return (NULL);
}
newDog->name = malloc(sizeof(char) * (name_size + 1));
if (newDog->name == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->name = name;
newDog->owner = malloc(sizeof(char) * (owner_size + 1));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->owner = owner;
newDog->age = age;
return (newDog);
}
