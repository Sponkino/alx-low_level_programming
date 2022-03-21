#include "main.h"
#include <stdio.h>

/**
 * swap_int - takes values of a pointer parameter into anther
 * @a: input integer a.
 * @b: input integer b
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	long int n = *a;

	*a = *b;
	*b = n;
}
