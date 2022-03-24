#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *cap_string - this function capitalizes first letter
 * overwriting the null terminate (\0) of dest.
 * @*str: point to string
 * @i: int for word count
 * @output: stores result of comparison.
 * Return: Returns zero
 */

char *cap_string(char *str)
{
	int i;
	
	for(i = 0; i <= str[i]; i++)
	{	if (i == 0)
			{
				if(str[i] >= 97 && str[i] <= 122)
				{
					str[i] -= 32;
				}
			}
		else if(str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i- 1] == '{' ||
				str[i - 1] == '}')
			{
				if(str[i] >= 97 && str[i] <= 122)
				{
					str[i] -= 32;
				}
			}
	}
return (0);
}
