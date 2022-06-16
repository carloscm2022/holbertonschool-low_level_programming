#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: pointer to first value
 *
 * @b: pointer to second value
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
