#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @t: Number
 *
 * Return: 1 (is greater than zero) or 0 (is zero)
 * OR -1 (is less than zero)
 */

int print_sign(int t)
{
	if (t > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (t == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
