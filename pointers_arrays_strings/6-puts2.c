#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: String
 * Return: void
 */
void puts2(char *str)
{
	int size = 0;
	int i;

	while (*str != '\0')
	{
		size++;
		str++;
	}

	str -= size;

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
