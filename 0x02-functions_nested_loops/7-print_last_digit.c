#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @no: A number
 *
 * Return: Last digit of no
 */

int print_last_digit(int no)
{
	int last_digit;

	if (no < 0)
		last_digit = (no % 10) * -1;
	else
		last_digit = no % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
