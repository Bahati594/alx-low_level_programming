#include "main.h"

/**
 * get_endianness - The machine is checked
 * to be either little or big endian.
 * Return: Big on 0, little on 1.
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}

