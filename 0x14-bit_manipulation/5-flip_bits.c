#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped from one to another
 * @n: first number
 * @m: second number
 * Return: number of bits that vary in n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff - n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
