#include "main.h"

/**
 * print_rev - Function that prints string in reverse
 * @s: Input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *len = s;

	while (*len)
		len++;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
