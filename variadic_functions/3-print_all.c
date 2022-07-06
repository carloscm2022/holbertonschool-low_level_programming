#include "variadic_functions.h"

/**
 * print_all - Print any type
 *
 * @format: List of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argument;
	unsigned int i = 0;
	char *tmp, *separator = "";

	if (format)
	{
		va_start(argument, format);
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(argument, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argument, double));
				break;
			case 's':
				tmp = va_arg(argument, char *);
				if (!tmp)
				{
					printf("%s(nil)", separator);
					break;
				}
				printf("%s%s", separator, tmp);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argument, int));
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	putchar(10);
	va_end(argument);
}
