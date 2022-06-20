#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string-base.
 * @src: string to replce the string-base.
 * @n: cuantity of letters to use of src.
 *
 * Return: Void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
