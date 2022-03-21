#include "main.h"

/**
* p_decimal - prints a decimal (char)
* @valist: valist
*/

int p_decimal(va_list valist)
{
	_putchar(va_arg(valist, int));
	return(0);
}