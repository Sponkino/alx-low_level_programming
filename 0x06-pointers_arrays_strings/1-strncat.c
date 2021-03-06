#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - this function appends two strings together
 * overwriting the null terminate (\0) of dest.
 * @dest: destination string to append to.
 * @src: string to append.
 * @n: determines the available space in dest
 * Return: Dest pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
