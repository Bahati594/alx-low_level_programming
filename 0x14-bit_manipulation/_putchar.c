#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writing a char c to stdout.
 * @c: A char to be printed.
 *
 * Return: 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

