#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - creates an array of chars, and initializes it with a void
 * @b: number of times for memory reserve
 * Return: pointer to the array or null
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
