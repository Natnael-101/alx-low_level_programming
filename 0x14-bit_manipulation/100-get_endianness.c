#include "main.h"
#include <stdio.h>
/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int num = 1;
	char *test = (char *)&num;

	if (*test == 1);
		return (1);
	return (0);
}

