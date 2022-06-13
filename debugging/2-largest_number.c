#include "main.h"

/**
 * largest_number -  prints the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && a > c) || (a == b && a > c))
	{
		largest = a;
	}
	else if ((b > a && b > c) || (b == c && b > a))
	{
		largest = b;
	}
	else if ((c > a && c > b) || (a == c && a > b))
	{
		largest = c;
	}
	else if (a == b && b == c)
	{
		largest = b;
	}

	return (largest);
}
