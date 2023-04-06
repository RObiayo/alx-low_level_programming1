#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped from one to another
 * @n: first number
 * @m: second number
 * Return: number of bits that vary in n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_value = n ^ m;

	while (xor_value != 0)
	{
		count += xor_value & 1;
		xor_value >>= 1;
	}
	return (count);
}
