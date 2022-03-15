#include "main.h"

/**
 * _islower - check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowecase 10 times
 * Return: 1 if is lowercase or if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'Z'; i++)
	{
		if (i == c)
			lower = 1;
	}

return (lower);
}
