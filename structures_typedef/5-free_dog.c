#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees a new_dog
 * @d: dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
