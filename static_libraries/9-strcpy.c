#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string.
 *
 * @src: string to be copied.
 *
 * Return: Void
 */

char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i;

	while (*src != '\0')
	{
		size++;
		src++;
	}

	src -= size;

	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
