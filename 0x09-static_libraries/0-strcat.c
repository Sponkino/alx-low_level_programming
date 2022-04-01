#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - this function appends two strings together
 * @dest: destination string to append to.
 * @src: string to append.
 * Return: Dest pointer.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
