#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_pair = 0, second_pair = 0;

	for (; first_pair < 100; first_pair++)
		for (second_pair = 0; second_pair < 100; second_pair++)
			if (first_pair < second_pair)
			{
				putchar((first_pair / 10) + 48);
				putchar((first_pair % 10) + 48);
				putchar(' ');
				putchar((second_pair / 10) + 48);
				putchar((second_pair % 10) + 48);
				if (first_pair != 98 || second_pair != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
