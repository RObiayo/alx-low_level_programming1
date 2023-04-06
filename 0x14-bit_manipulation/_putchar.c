#include <unistd.h>

/**
 * _putchar - puts a char to stdout
 * @c: character to be printed
 * Return: Success, number of chars placed
 * On error, -1 is returned, errno is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
