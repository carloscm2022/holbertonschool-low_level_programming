#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes.
 *
 * @argc: Quantity of arguments.
 *
 * @argv: Vector of arguments.
 *
 * Return: 0 if success
 * 1 if exist more than 2 argument on the argv
 * 2 if the numbers of bytes passed by the arguments is negative
 */

int main(int argc, char *argv[])
{
	int number_bytes = 0, i = 0;
	char *f = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_bytes = atoi(argv[1]);

	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = (char *)main;

	for (i = 0; i < number_bytes; i++)
	{
		printf("%02hhx", f[i]);
		if (i + 1 != number_bytes)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
