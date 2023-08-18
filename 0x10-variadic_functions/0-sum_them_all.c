#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of paramters.
 * @n: Number of paramters passed to function.<F6>
 * @...: the variable number of paramters that calculate sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - Sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

