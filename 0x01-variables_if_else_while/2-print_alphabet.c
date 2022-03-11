#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print any letter alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
