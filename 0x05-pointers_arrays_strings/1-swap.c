#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = *a;
}
