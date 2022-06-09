#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Description: Prints all possible combinations of single-digit numbers. *
 * Return: Always return (0)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
