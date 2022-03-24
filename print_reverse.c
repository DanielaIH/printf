#include "main.h"

/**
* p_reverse - prints a string in reverse
* @valist: valist
* Return: len
*/

int p_reverse(va_list valist)
{
	char *str;
	int i, len = 0;

	str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++) /* Find the string length */
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--) /* Print characters in reverse */
	{
		_putchar(str[i]);
	}
	return (len);
}
