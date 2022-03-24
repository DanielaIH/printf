#include "main.h"

/**
* p_rot13 - prints the rot13'ed string
* @valist: valist
* Return: len
*/

int p_rot13(va_list valist)
{
	char *str, *letters, *rot13;
	int i, j, len = 0;

	letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; *(str + i) != '\0'; i++) /* Find the string length */
		len++;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!letters[j])
			_putchar(str[i]);
	}
	return (len);
}
