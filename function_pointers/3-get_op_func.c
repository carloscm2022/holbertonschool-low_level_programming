#include "3-calc.h"

/**
 * get_op_func - Validate and get the operation to use.
 *
 * @s: The operator (+, -, *, /, %)
 *
 * Return: The result of the operation, and null otherwise.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
