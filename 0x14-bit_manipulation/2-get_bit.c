#include "main.h"

/**
 * get_bit - Returning a value of the bit in an
 * index in the decimal number.
 * @n: The number to search.
 * @index: A bit index.
 * Return: The bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

