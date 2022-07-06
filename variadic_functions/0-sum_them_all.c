#incluir <stdio.h>
#incluir <stdarg.h>

/**
* sum_them_all - suma de todos sus parámetros
* @n: n args
* Retorno: suma o si n == 0, devuelve 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	sin firmar int i;
	va_list lista;

	si (n)
	{
		va_start(lista, n);
		para (i = 0; i < n; i++)
		{
 suma += va_arg(list, int);
		}
		va_end (lista);
	}
	retorno (suma);
}
