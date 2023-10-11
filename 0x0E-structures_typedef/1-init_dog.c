#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialise dog struct
 *
 * @d: pointer to the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
