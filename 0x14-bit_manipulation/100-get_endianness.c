#include "main.h"

/**
 * get_endianness - confirm endianness of system
 * Return: 0 for major endian, 1 for minor endian
 */
int get_endianness(void)
{
	uint16_t i = 1;
	uint8_t *p = (uint8_t *)&i;

	return (*p);
}
