#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int big_number = 612852475143;


	for (i = 2; i <= big_number; i++)
	{
		if (big_number % i != 0)
		{
			continue;
		}

		if (i == big_number)
		{
			printf("%ld", big_number);
		}
		big_number /= i;
		i--;
	}
	printf("\n");
	return (0);
}
