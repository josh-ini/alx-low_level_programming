#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++)
	{
		putchar(Lc);
	}
	putchar ('\n');
	return (0);
}
