#include "main.h"

/**
 * print_rev - Function that prints string in reverse
 * @s: Input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\n')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
