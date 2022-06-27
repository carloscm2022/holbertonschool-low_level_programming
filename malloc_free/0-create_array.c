#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: Size of the new array
 *
 * @c: Char to use in the new array
 *
 * Return: A new array with the same char, or NULL if size is 0
 * or 1 if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *jarvis;
	unsigned int u;

	jarvis = (char *)malloc(sizeof(char) * size);

	if (jarvis == NULL || size == 0)
	{
		return (NULL);
	}
	for (u = 0; u < size; u++)
	{
		jarvis[u] = c;
	}
	return (jarvis);
}
