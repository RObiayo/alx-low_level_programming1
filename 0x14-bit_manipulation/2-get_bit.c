#include "main.h"

/**
 * get_bit - bit value getter at a specified index
 * @n: the digit to get value from
 * @index: the index of bit to be gotten (from 0)
 * Return: value of bit at specified index, or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
