#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initializes a variable of
 * type struct dog
 * @d: pointer to struct dog to initialize
 * @name: first member as string
 * @age: second member as float
 * @owner: third member as string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
