#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
