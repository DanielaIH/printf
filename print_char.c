#include "main.h"

/**
* p_char - prints a char
* @valist: valist
* Return: 1
*/

int p_char(va_list valist)
{
	char c = va_arg(valist, int);

	_putchar(c);
	return (1);
}
