#include "main.h"

/**
* p_nteger - prints an integer
* @valist: valist
*/

int p_integer(va_list valist)
{
	int n = va_arg(valist, int);
	int ultimo = n % 10;
	int base = 1;
	int cantidad = 1;
	int numero, digito;
	n = n / 10;
	numero = n;
}
