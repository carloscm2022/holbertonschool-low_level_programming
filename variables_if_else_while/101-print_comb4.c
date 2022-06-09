#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = 49; n2 < 58; n2++)
		{
			for (n3 = 50; n3 < 58; n3++)
			{
				if (n1 != n2 && n2 != n3 && n1 != n3 && n2 > n1 && n3 > n2)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (!(n1 == 55 && n2 == 56 && n3 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
