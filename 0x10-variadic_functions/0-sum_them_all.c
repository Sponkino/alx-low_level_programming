#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums numbers parsed to it
 * @n: unsigned int to positive number of numbers
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n <= 0)
		{
		return (0);
		}
	else
		{
		va_list ap;
		unsigned int j, sum;

		va_start(ap, n);
		sum = 0;

		for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

		va_end(ap);
		return (sum);
		}
}
