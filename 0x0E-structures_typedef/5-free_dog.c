#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - function that free dogs.
 * @d: the dogs to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
