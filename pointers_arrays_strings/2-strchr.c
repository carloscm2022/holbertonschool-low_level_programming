#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String.
 *
 * @c: character to match.
 *
 * Return: A pointer to s[i] if c is exists in s or NULL;
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *result = NULL;

	while (s[j])
	{
		j++;
	}

	j++;

	while (i <= j)
	{
		if (s[i] == c)
		{
			result = &s[i];
			return (result);
		}
		i++;
	}

	return (result);
}
