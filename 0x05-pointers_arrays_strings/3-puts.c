#include "main.h"

/**
 * _puts - Function that printsa string, followed by a new line
 * @str: Input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
