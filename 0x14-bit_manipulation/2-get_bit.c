#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit in a decimal number.
 * @n: The decimal number to search.
 * @index: The position of the bit to retrieve (0-based index).
 *
 * Return: The value of the bit at the specified index (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

