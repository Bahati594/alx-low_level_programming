#include "main.h"

/**
 * flip_bits - The number of bits to
 * be modified are counted.
 * to get from one number to another
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to be modified.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			count++;
	}

	return (count);
}

