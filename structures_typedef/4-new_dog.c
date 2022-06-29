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
    int nlen, olen, i;

    nlen = 0;
    olen = 0;
    if (name == NULL || owner == NULL)
        return (NULL);

    newdog = malloc(sizeof(dog_t));
    if (newdog == NULL)
        return (NULL);

    for (i = 0; name[i]; i++)
        nlen++;
    newdog->name = malloc(nlen + 1);
    if (newdog->name == NULL)
    {
        free(newdog->name);
        free(newdog);
		return (NULL);
    }

    for (i = 0; owner[i]; i++)
        olen++;
    newdog->owner = malloc(olen + 1);
    if (newdog->owner == NULL)
    {
        free(newdog->owner);
        free(newdog->name);
        free(newdog);
		return (NULL);
    }

    for (i = 0; i <= nlen; i++)
        newdog->name[i] = name[i];
    for (i = 0; i <= olen; i++)
        newdog->owner[i] = owner[i];
    newdog->age = age;

    return (newdog);
}
