#include <unistd>

/**
 * _putchar - write character c
 * @c: character to be orinted
 * Return: on success 1
 */
int _putchar(xhar c)
{
	return (write(1, &c, 1));
}
