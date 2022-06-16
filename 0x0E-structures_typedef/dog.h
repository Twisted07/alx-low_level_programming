#ifndef DOG_H
#define DOG_H

/**
* dog_t - Typedef struct dog
*/

typedef struct dog dog_t;

/**
* struct dog - structure of dog type
* @name: first member of the type (a pointer)
* which stores the address to the value of dog name
* @owner: stores the address to the value of dog owner
* @age: stores the value of dog age and accepts float data type
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
