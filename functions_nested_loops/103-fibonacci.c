#include <stdio.h>
/**
 * main - Prints the sum of the even-valued terms,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, sum = 0, result = 2;

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			result += sum;
	}
	printf("%d\n", result);
	return (0);
}
