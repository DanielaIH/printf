#include "main.h"

/**
* find_hex - find the hexadecimal expression for non printable characters
* @c: non printable char
* Return: i
*/
int find_hex(char c)
{
	int i;
	char dif = 7;
	char hex[2];

	hex[0] = c / 16;
	hex[1] = c % 16;
	for (i = 0; i < 2; i++)
	{
		if (hex[i] >= 10)
			_putchar('0' + dif + hex[i]);
		else
			_putchar('0' + hex[i]);
	}
	return (i);
}

/**
* p_string_ascii - prints a string and non printable characters
* are changed for \x
* @valist: valist
* Return: len
*/

int p_string_ascii(va_list valist)
{
	char *str;
	int i, j, len = 0;

	str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
	if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
	{
		_putchar(92);
		_putchar(120);
		len += 2 + find_hex(str[i]);
	}
	else
	{
		_putchar(str[i]);
		len++;
	}
	} /* end for */
	return (len);
}
