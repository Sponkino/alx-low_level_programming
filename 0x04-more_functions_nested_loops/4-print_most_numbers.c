#include "main.h"

/**
 * print_numbers - print numbers 0-9
 *
 * Return: void
 */
void print_most_numbers(void);
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
