#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - this function compares two strings
 * overwriting the null terminate (\0) of dest.
 * @s1: string to compare
 * @s2: string to compare
 * @output: stores result of comparison.
 * Return: Returns output return
 */

int _strcmp(char *s1, char *s2)
{
	int output;

	output = strcmp(s1, s2);

	return (output);
}
