#include "main.h"

/**
* p_char - prints a char
* @valist: valist
*/

int p_char(va_list valist)
{
	_putchar(va_arg(valist, int));
	return(0);
}
