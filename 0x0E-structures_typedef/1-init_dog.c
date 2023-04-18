#include "dog.h"

/**
  * init_dog - A function that initates a struct.
  * @d: pointer.
  * @name: name.
  * @age: age.
  * @owner: owner name.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
