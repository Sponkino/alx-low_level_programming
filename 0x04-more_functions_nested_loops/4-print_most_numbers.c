#include "main.h"

/**
 * print_numbers - print numbers 0-9
 *
 * Return: void
 */
void print_most_numbers(void);
{
	int c;

	for (c = '0'; c != '2' || c != '4'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
