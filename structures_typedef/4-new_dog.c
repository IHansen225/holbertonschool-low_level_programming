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
    char *prov_name, *prov_owner;
    int nlen, olen;
    int i = 0;

    if (name == NULL || owner == NULL)
        return (NULL);
    for (;name[i]; i++)
        nlen++;
    for (i = 0; owner[i]; i++)
        olen++;
    prov_name = malloc(nlen + 1);
    prov_owner = malloc(olen + 1);
    for (i = 0; name[i]; i++)
        prov_name[i] = name[i];
    for (i = 0; owner[i]; i++)
        prov_owner[i] = owner[i];
    newdog->name = prov_name;
    newdog->owner = prov_owner;
    return (newdog);
}
