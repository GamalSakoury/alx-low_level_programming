#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - function that prints struct.
  * @d: pointer.
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
