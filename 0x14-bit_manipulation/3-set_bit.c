#include "main.h"

/**
 * set_bit - set bit value to 1 at a specific index
 * @n: pointer of the digit to alter
 * @index: index of set bit (from 0)
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;

	return (1);
}
