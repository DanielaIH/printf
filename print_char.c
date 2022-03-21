#include "main.h"

/**
* p_char - prints a char
* @valist: valist
*/

void p_char(va_list valist)
{
	_putchar(va_arg(valist, int));
}
