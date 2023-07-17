#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *name1;
	char *owner1;
	int l1 = sizelen(name);
	int l2 =sizelzn(owner);

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
}

int sizelen(char *c)
{
	int i, l = 0;

	for (i = 0; c[i]; i++)
		l++;
	return (l);
}

