#include "3-calc.h"

/**
 * op_add - Sum two numbers
 *
 * @a: number 1
 *
 * @b: number 2
 *
 * Return: Sum of both numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ubstract b to a
 *
 * @a: number 1
 *
 * @b: number 2
 *
 * Return: Substract b to a.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 *
 * @a: number 1
 *
 * @b: number 2
 *
 * Return: Multiply a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a between b
 *
 * @a: number 1
 *
 * @b: number 2
 *
 * Return: Divide a between b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get the result of (a % b)
 *
 * @a: number 1
 *
 * @b: number 2
 *
 * Return: (a % b)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
