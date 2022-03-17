#include "main.h"
#include <stdio.h>

/**
 * print_numbers -function that prints numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int c = '0';

	for (; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
