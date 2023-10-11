#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that create a dog details
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Desc: first struct
 */

/**
 * dog_t - new name type for struct dog
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
