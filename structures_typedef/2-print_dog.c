#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print the dog struct
 * @d: struct to be initialized
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		return;
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		return;
	else
		printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		return;
	else
		printf("Owner: %.s\n", d->owner);
}
