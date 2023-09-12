#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: the length of the string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	while (name[x])
	{
		x++;
	}
	while (owner[y])
	{
		y++;
	}
	p->name = malloc(sizeof(char) * (x + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = malloc(sizeof(char) * (y + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
	{
		p->name[z] = name[z];
	}
	for (z = 0; z <= y; z++)
	{
		p->owner[z] = owner[z];
	}
	return (p);
}
