#include "main.h"
/**
* p_uinteger - prints an integer
* @valist: valist
* Return: cantidad
*/
int p_uinteger(va_list valist)
{
	int n = va_arg(valist, int);
	int ultimo = n % 10;
	int base = 1;
	int cantidad = 1;
	int numero, digito;
	
	if (n < 0)
		n = n * -1;

	n = n / 10;
	numero = n;

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
	_putchar(ultimo + '0');
	return (cantidad);
}
