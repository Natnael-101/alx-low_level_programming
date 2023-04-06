#include "main.h"

/**
 * get_endianness - returns processor endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n;
	char *t;

	n = 1;
	t = (char *) &n;
	return ((int)*t);
}

