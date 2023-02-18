#include <stdio.h>
/**
 * main - main block
 * Description: prints the lower case alphabets in reverse,
 * followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
