#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new_dog
 * @name: name of the new_dog
 * @age: age of the new_dog
 * @owner: owner of the new_dog
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newdog;
    int nlen, olen;
    int i = 0;

    if (name == NULL || owner == NULL)
        return (NULL);
    for (;name[i]; i++)
        nlen++;
    for (i = 0; owner[i]; i++)
        olen++;
    newdog->name = malloc(nlen + 1);
    newdog->owner = malloc(olen + 1);
    newdog->age = age;
    if (newdog->name == NULL || newdog->owner == NULL || newdog->age == NULL)
        return (NULL);
    for (i = 0; name[i]; i++)
        newdog->name[i] = name[i];
    for (i = 0; owner[i]; i++)
        newdog->owner[i] = owner[i];
    return (newdog);
}
