#ifndef DOG
#define DOG

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - defines a dog class
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
