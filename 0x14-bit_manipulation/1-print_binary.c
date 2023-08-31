#include "main.h"

/**
 * print_binary - A binary equivalent of
 * the decimal number is printed.
 * @p: The number to print in binary.
 */
void print_binary(unsigned long int p)
{
	int k, count = 0;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = p >> k;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
		if (!count)
			_putchar('0');
}

