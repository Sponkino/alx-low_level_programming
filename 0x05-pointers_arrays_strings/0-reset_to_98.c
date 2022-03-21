#include "main.h"
#include <stdio.h>

/**
 * main: takes value and update to 98
 * @n: number to reset number
 * @p: is a pointer that takes a number.
 */

void reset_to_98(int n)
{
	int *p = &n;

	*p = 98;

	return (0);
}
