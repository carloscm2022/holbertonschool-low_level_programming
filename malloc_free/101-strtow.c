#include "main.h"
#include <stdlib.h>

/**
 * only_spaces - Discover if only exists spaces in a string.
 *
 * @str: String to search the spaces.
 *
 * Return: 1 if exist other char, 0 if not.
 */

unsigned int only_spaces(char *str)
{
	unsigned int flag = 1, i = 0;

	while (str[i] == 32)
		i++;

	if (!str[i])
		flag = 0;

	return (flag);
}

/**
 * count_to_the_next_space - Count the characters ultil the next space.
 *
 * @str: String to search the space.
 *
 * @index: From where to start looking
 *
 * Return: The quantity of characters to the next spaces
 */

unsigned int count_to_the_next_space(char *str, unsigned int index)
{
	unsigned int counter = 0, i = index;

	while (str[i] != 32 /* || !str[i] */)
	{
		if (!str[i])
			break;
		i++, counter++;
	}

	return (counter + 1);
}

/**
 * number_of_words - Count the words on an array.
 *
 * @str: String to search words.
 *
 * Return: Number of words of an string separated by spaces.
 */

unsigned int number_of_words(char *str)
{
	unsigned int counter = 0, i = 0, flag = 0;

	for (; str[i]; i++)
	{
		if ((str[i] == 32 || !str[i + 1]) && flag == 0)
			continue;
		else if ((str[i] == 32 || !str[i + 1]) && flag == 1)
			flag = 0, counter++;
		flag = 1;
	}

	return (counter + 1);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: String to split.
 *
 * Return: Double pointer to a new string filled of words, NULL if fails
 * or if the str is NULL.
 */

char **strtow(char *str)
{
	char **result = NULL;
	int i = 0, j = 0, flag = 0, len = 0, tmp = 0;
	unsigned int quantity_of_words = 0;

	if (str == NULL || *str == '\0' || !only_spaces(str))
		return (NULL);

	quantity_of_words = number_of_words(str);

	result = malloc(quantity_of_words * sizeof(void *));
	if (!result)
		return (NULL);
	for (; str[i]; i++)
	{
		if (str[i] == 32)
		{
			if (flag)
				flag = 0, tmp = 0, j++;
			continue;
		}
		if (!flag)
		{
			len = count_to_the_next_space(str, i);
			result[j] = malloc(len * sizeof(char));
			if (result[j] == NULL)
			{
				for (; j >= 0 ; j--)
					free(result[j]);
				free(result);
				return (NULL);
			}
			flag = 1;
		}
		result[j][tmp] = str[i];
		tmp++;

		if (str[i + 1] == 32 || !str[i + 1])
			result[j][tmp] = '\0';
	}
	return (result);
}
