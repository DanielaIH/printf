#include "main.h"

/**
* p_hex - prints a number in hexadecimal format
* @valist: valist
* Return: i
*/

int p_hex(va_list valist)
{
	unsigned int decimal = va_arg(valist, unsigned int);
	int i = 0, j = 0;
	int hexa[200];

	while (decimal >= 16)
	{
		hexa[i] = decimal % 16;
		decimal = decimal / 16;
		i++;
	}
	hexa[i] = decimal;
	for (j = i; j >= 0; j--)
	{
		switch (hexa[j])
		{
			case 10:
				_putchar('a');
			break;
			case 11:
				_putchar('b');
			break;
			case 12:
				_putchar('c');
			break;
			case 13:
				_putchar('d');
			break;
			case 14:
				_putchar('e');
			break;
			case 15:
				_putchar('f');
			break;
			default:
				_putchar(hexa[j] + '0');
			break;
		}
	}
	return (i + 1);
}
