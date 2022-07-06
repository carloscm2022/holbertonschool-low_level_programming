#include "variadic_functions.h"
/**
 * print_numbers - Print all the numbers passed like arguments
 *
 * @separator: String to separate numbers
 *
 * @n: Number of arguments
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(number);
	putchar(10);
}
