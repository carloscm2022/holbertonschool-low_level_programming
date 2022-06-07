#include<stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
