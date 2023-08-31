#include "main.h"

/**
 * clear_bit - The value of the certain bit is set to 0.
 * @n: Pointer number to be modified.
 * @index: Index of a bit to be cleared.
 *
 * Return: Success on 1, failure on -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

