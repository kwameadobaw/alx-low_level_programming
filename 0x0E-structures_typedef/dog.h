#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
