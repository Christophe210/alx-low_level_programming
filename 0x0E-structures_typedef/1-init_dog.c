#include "dog.h"
/**
* init_dog - initializes a structure of type dog
* @name: pointer to the name of the dog
* @d:pointer to structure
* @age: age of dog
* @owner: pointer to owner of dog
*
*return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
