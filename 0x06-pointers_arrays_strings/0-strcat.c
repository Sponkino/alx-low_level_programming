#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * strcat - concantates 2 strings
 * @*dest, pointer to a string
 * @*src: pointer to a string
 * Return: no return.
 */


char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
