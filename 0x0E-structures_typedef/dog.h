#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type defining dog as a struct
 * @name: string of characters
 * @age: an integer
 * @owner: string of characters
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
