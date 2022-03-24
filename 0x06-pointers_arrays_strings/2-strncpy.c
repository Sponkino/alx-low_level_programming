#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - this function copies and appends two strings together
 * overwriting the null terminate (\0) of dest.
 * @dest: destination string to append to.
 * @src: string to append.
 * @n: determines the available space in dest that
 * we can append to
 * Return: Dest pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
