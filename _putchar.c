#include unistd.h>
/**
 *_putchar - function to return character to stdout
 * @c: type char parameter
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
