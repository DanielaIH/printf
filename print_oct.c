#include "main.h"

/**
* p_oct - prints a number in octal
* @valist: valist
* Return: i
*/

int p_oct(va_list valist)
{
	unsigned int decimal = va_arg(valist, unsigned int);
	int i = 0, j = 0;
	int octal[20];

	while (decimal >= 8)
	{
		octal[i] = decimal % 8;
		decimal = decimal / 8;
		i++;
	}
	octal[i] = decimal;
	for (j = i; j >= 0; j--)
		_putchar(octal[j] + '0');
	return (i + 1);
}
