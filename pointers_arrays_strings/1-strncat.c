#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: string-base.
 * @src: string to add in the string-base.
 * @n: cuantity of letters to use of src.
 *
 * Return: Void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
