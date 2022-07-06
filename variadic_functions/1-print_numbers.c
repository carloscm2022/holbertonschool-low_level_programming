#incluir "variadic_functions.h"

/**
* print_numbers - imprime números, seguidos de una nueva línea.
* @separator: delimitador
* @n: n args
* Devolución: nula
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	sin firmar int i;

	va_start(lista, n);
	si (n != 0)
	{
		para (i = 0; (i < n - 1); i++)
		{
			if (separador != NULL)
			{
				printf("%d%s", va_arg(list, int), separador);
			}
			más
			{
				printf("%d", va_arg(list, int));
			}
		}
		printf("%d", va_arg(list, int));
		va_end (lista);
	}
	printf("\n");
}
