#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog-creates a new dog.
 * @name:dog name
 * @age:dog's age
 * @owner:dog's owner
 * Return:pointer to the new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *name1;
	char *owner1;
	int l1 = sizelen(name);
	int l2 =sizelen(owner);
	int i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	name1 = malloc(l1 + 1);
	if (name1 == NULL)
	{
		free(ndog);
		return (NULL);
	}
	owner1 = malloc(l2 + 1);
	if (owner1 == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		name1[i] = name[i];
	}
	name1[l1] = '\0';

	for (i = 0; i < l2; i++)
	{
		owner1[i] = owner[i];
	}
	owner1[l2] = '\0';

	ndog->name = name1;
	ndog->owner = owner1;
	ndog->age = age;
	return (ndog);
}

/**
 * sizelen-calculate size of string
 * @c:string
 * Return:the size
 */

int sizelen(char *c)
{
	int i, l = 0;

	for (i = 0; c[i]; i++)
		l++;
	return (l);
}

