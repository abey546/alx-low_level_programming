#include "main.h"

/**
 * get_endianness - determine if a machine is little or big endian
 * Return: if is big endian or little endian and return 0 or 1, respectively.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
i
