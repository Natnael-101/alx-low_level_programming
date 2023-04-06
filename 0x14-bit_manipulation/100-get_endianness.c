#include "main.h"

/**
 * get_endianness - returns processor endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *test;

	num = 1;
	test = (char *) &num;
	return ((int)*test);
}

