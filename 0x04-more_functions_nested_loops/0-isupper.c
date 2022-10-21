#include "main.h"
/**
 * _supper - check if a character is uppercase
 * @c: variable text
 * Return: Always 0
 */
int _supper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
