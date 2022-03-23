#include "main.h"

/**
* p_bin - prints a number in binary format
* @valist: valist
* Return: len
*/

int p_bin(va_list valist)
{
unsigned int b = va_arg(valist, unsigned int);
char binary[256];
char temp;
int len = 0, i = 0, middle;

do {
	if (b % 2 == 0)
		binary[len] = '0';
	else
		binary[len] = '1';
	b /= 2;
	len++;
} while (b != 0);

binary[len] = '\0';

middle = len / 2;

for (i = 0; i < middle; i++)
{
	temp = binary[i];
	binary[i] = binary[len - i - 1];
	binary[len - i - 1] = temp;
}
for (i = 0; i < len; i++)
{
	_putchar(binary[i]);
}
return (len);
}
