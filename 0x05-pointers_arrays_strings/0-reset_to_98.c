#include "main.h"
#include <stdio.h>

/**
 * main: takes value and update to 98
 * @n: number to reset
 * @p: is a pointer that takes a number.
 */

int main(void)
{
	int n;
	int *p = &n;

	*p = 98;

	return (0);
}
