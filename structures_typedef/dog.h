#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: data structure for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
