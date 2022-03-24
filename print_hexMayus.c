#include "main.h"

/**
* p_hexMayus - prints a number in hexadecimal format
* @valist: valist
* Return: i
*/

int p_hexMayus(va_list valist)
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
				_putchar('A');
			break;
			case 11:
				_putchar('B');
			break;
			case 12:
				_putchar('C');
			break;
			case 13:
				_putchar('D');
			break;
			case 14:
				_putchar('E');
			break;
			case 15:
				_putchar('F');
			break;
			default:
				_putchar(hexa[j] + '0');
			break;
		}
	}
	return (i + 1);
}
