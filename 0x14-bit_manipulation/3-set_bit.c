#include "main.h"

/**
 * set_bit - This function sets a specific bit at a given index to 1.
 * @n:  A pointer to the number whose bit is to be changed.
 * @index: The index of the bit to set to 1 (0-based index).
 *
 * Return: 1 if the operation is successful, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

