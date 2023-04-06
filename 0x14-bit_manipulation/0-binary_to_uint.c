#include "main.h"

/**
 * binary_to_uint - changes binary number to unsigned int
 * @b: a pointer to strings of 0 and 1
 * Return: the changed number, or 0 if chars are one or more
 * in the b string that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		result <<= 1;
		else if (b[i] == '1')
		result = (result << 1) | 1;
		else
		return (0);

		i++;
	}
	return (result);
}
