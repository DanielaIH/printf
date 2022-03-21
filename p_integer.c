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
	if (ultimo < 0)
	{
		_putchar('_');
		numero = numero * - 1;
		n = n * - 1;
		ultimo = ultimo * - 1;
		cantidad++;
	}
	if (numero > 0)
	{
		while (numero / 10 != 0)
		{
			base = base * 10;
			numero = numero / 10;
		}
		numero = n;
		while (base > 0)
		{
			digito = numero / base;
			_putchar(digito + '0');
			numero = numero - (digito * base);
			base = base / 10;
			cantidad++;
		}
	}
	putchar(ultimo + '0');
	return (cantidad);
}
