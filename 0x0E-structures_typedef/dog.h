#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog Owner
 */

struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - information about a dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
