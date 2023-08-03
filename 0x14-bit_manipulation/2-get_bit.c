#include "main.h"

/**
 * get_bit - returning the value of a bit at index in decimmal number.
 * @n: the decimal number to examine.
 * @index: index of the bit
 *
 * Return: value of the bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

