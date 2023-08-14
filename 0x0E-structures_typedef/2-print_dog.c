#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints struct dog
 * @d: Object to dog
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
