#include "main.h"

/**
 * clear_bit - This function clears the value of a specific bit to 0.
 * @n:  A pointer to the number whose bit is to be changed.
 * @index: The index of the bit to clear (0-based index).
 *
 * Return:  1 if the operation is successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
